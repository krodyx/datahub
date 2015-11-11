import hashlib

from django.test import TestCase
from django.test import Client
from django.core.urlresolvers import resolve

from core.db.manager import DataHubManager
from django.contrib.auth.models import User
from browser.views import home
from browser.views import repo_create

class BrowserPagesNotRequiringAuth(TestCase):

    def test_home_url_resolves_to_home_func(self):
        found = resolve('/')
        self.assertEqual(found.func, home)

    def test_home_url_returns_index_template(self):
        response = self.client.get('/', follow=True)
        self.assertEqual(response.status_code, 200)
        self.assertTemplateUsed(response, 'index.html')

