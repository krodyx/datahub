/**
 * Autogenerated by Thrift Compiler (1.0.0-dev)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#import <Foundation/Foundation.h>

#import "TProtocol.h"
#import "TApplicationException.h"
#import "TProtocolException.h"
#import "TProtocolUtil.h"
#import "TProcessor.h"
#import "TObjective-C.h"
#import "TBase.h"


@interface ConnectionParams : NSObject <TBase, NSCoding> {
  NSString * __client_id;
  NSString * __seq_id;
  NSString * __user;
  NSString * __password;
  NSString * __repo_base;

  BOOL __client_id_isset;
  BOOL __seq_id_isset;
  BOOL __user_isset;
  BOOL __password_isset;
  BOOL __repo_base_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=client_id, setter=setClient_id:) NSString * client_id;
@property (nonatomic, retain, getter=seq_id, setter=setSeq_id:) NSString * seq_id;
@property (nonatomic, retain, getter=user, setter=setUser:) NSString * user;
@property (nonatomic, retain, getter=password, setter=setPassword:) NSString * password;
@property (nonatomic, retain, getter=repo_base, setter=setRepo_base:) NSString * repo_base;
#endif

- (id) init;
- (id) initWithClient_id: (NSString *) client_id seq_id: (NSString *) seq_id user: (NSString *) user password: (NSString *) password repo_base: (NSString *) repo_base;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) client_id;
- (void) setClient_id: (NSString *) client_id;
#endif
- (BOOL) client_idIsSet;

#if !__has_feature(objc_arc)
- (NSString *) seq_id;
- (void) setSeq_id: (NSString *) seq_id;
#endif
- (BOOL) seq_idIsSet;

#if !__has_feature(objc_arc)
- (NSString *) user;
- (void) setUser: (NSString *) user;
#endif
- (BOOL) userIsSet;

#if !__has_feature(objc_arc)
- (NSString *) password;
- (void) setPassword: (NSString *) password;
#endif
- (BOOL) passwordIsSet;

#if !__has_feature(objc_arc)
- (NSString *) repo_base;
- (void) setRepo_base: (NSString *) repo_base;
#endif
- (BOOL) repo_baseIsSet;

@end

@interface Connection : NSObject <TBase, NSCoding> {
  NSString * __client_id;
  NSString * __seq_id;
  NSString * __user;
  NSString * __repo_base;
  int64_t __cursor;

  BOOL __client_id_isset;
  BOOL __seq_id_isset;
  BOOL __user_isset;
  BOOL __repo_base_isset;
  BOOL __cursor_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=client_id, setter=setClient_id:) NSString * client_id;
@property (nonatomic, retain, getter=seq_id, setter=setSeq_id:) NSString * seq_id;
@property (nonatomic, retain, getter=user, setter=setUser:) NSString * user;
@property (nonatomic, retain, getter=repo_base, setter=setRepo_base:) NSString * repo_base;
@property (nonatomic, getter=cursor, setter=setCursor:) int64_t cursor;
#endif

- (id) init;
- (id) initWithClient_id: (NSString *) client_id seq_id: (NSString *) seq_id user: (NSString *) user repo_base: (NSString *) repo_base cursor: (int64_t) cursor;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) client_id;
- (void) setClient_id: (NSString *) client_id;
#endif
- (BOOL) client_idIsSet;

#if !__has_feature(objc_arc)
- (NSString *) seq_id;
- (void) setSeq_id: (NSString *) seq_id;
#endif
- (BOOL) seq_idIsSet;

#if !__has_feature(objc_arc)
- (NSString *) user;
- (void) setUser: (NSString *) user;
#endif
- (BOOL) userIsSet;

#if !__has_feature(objc_arc)
- (NSString *) repo_base;
- (void) setRepo_base: (NSString *) repo_base;
#endif
- (BOOL) repo_baseIsSet;

#if !__has_feature(objc_arc)
- (int64_t) cursor;
- (void) setCursor: (int64_t) cursor;
#endif
- (BOOL) cursorIsSet;

@end

@interface Tuple : NSObject <TBase, NSCoding> {
  NSMutableArray * __cells;

  BOOL __cells_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=cells, setter=setCells:) NSMutableArray * cells;
#endif

- (id) init;
- (id) initWithCells: (NSMutableArray *) cells;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSMutableArray *) cells;
- (void) setCells: (NSMutableArray *) cells;
#endif
- (BOOL) cellsIsSet;

@end

@interface ResultSet : NSObject <TBase, NSCoding> {
  BOOL __status;
  Connection * __con;
  int64_t __num_tuples;
  int64_t __num_more_tuples;
  NSMutableArray * __tuples;
  NSMutableArray * __field_names;
  NSMutableArray * __field_types;

  BOOL __status_isset;
  BOOL __con_isset;
  BOOL __num_tuples_isset;
  BOOL __num_more_tuples_isset;
  BOOL __tuples_isset;
  BOOL __field_names_isset;
  BOOL __field_types_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=status, setter=setStatus:) BOOL status;
@property (nonatomic, retain, getter=con, setter=setCon:) Connection * con;
@property (nonatomic, getter=num_tuples, setter=setNum_tuples:) int64_t num_tuples;
@property (nonatomic, getter=num_more_tuples, setter=setNum_more_tuples:) int64_t num_more_tuples;
@property (nonatomic, retain, getter=tuples, setter=setTuples:) NSMutableArray * tuples;
@property (nonatomic, retain, getter=field_names, setter=setField_names:) NSMutableArray * field_names;
@property (nonatomic, retain, getter=field_types, setter=setField_types:) NSMutableArray * field_types;
#endif

- (id) init;
- (id) initWithStatus: (BOOL) status con: (Connection *) con num_tuples: (int64_t) num_tuples num_more_tuples: (int64_t) num_more_tuples tuples: (NSMutableArray *) tuples field_names: (NSMutableArray *) field_names field_types: (NSMutableArray *) field_types;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (BOOL) status;
- (void) setStatus: (BOOL) status;
#endif
- (BOOL) statusIsSet;

#if !__has_feature(objc_arc)
- (Connection *) con;
- (void) setCon: (Connection *) con;
#endif
- (BOOL) conIsSet;

#if !__has_feature(objc_arc)
- (int64_t) num_tuples;
- (void) setNum_tuples: (int64_t) num_tuples;
#endif
- (BOOL) num_tuplesIsSet;

#if !__has_feature(objc_arc)
- (int64_t) num_more_tuples;
- (void) setNum_more_tuples: (int64_t) num_more_tuples;
#endif
- (BOOL) num_more_tuplesIsSet;

#if !__has_feature(objc_arc)
- (NSMutableArray *) tuples;
- (void) setTuples: (NSMutableArray *) tuples;
#endif
- (BOOL) tuplesIsSet;

#if !__has_feature(objc_arc)
- (NSMutableArray *) field_names;
- (void) setField_names: (NSMutableArray *) field_names;
#endif
- (BOOL) field_namesIsSet;

#if !__has_feature(objc_arc)
- (NSMutableArray *) field_types;
- (void) setField_types: (NSMutableArray *) field_types;
#endif
- (BOOL) field_typesIsSet;

@end

@interface DBException : NSException <TBase, NSCoding> {
  int32_t __error_code;
  NSString * __message;
  NSString * __details;

  BOOL __error_code_isset;
  BOOL __message_isset;
  BOOL __details_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=error_code, setter=setError_code:) int32_t error_code;
@property (nonatomic, retain, getter=message, setter=setMessage:) NSString * message;
@property (nonatomic, retain, getter=details, setter=setDetails:) NSString * details;
#endif

- (id) init;
- (id) initWithError_code: (int32_t) error_code message: (NSString *) message details: (NSString *) details;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (int32_t) error_code;
- (void) setError_code: (int32_t) error_code;
#endif
- (BOOL) error_codeIsSet;

#if !__has_feature(objc_arc)
- (NSString *) message;
- (void) setMessage: (NSString *) message;
#endif
- (BOOL) messageIsSet;

#if !__has_feature(objc_arc)
- (NSString *) details;
- (void) setDetails: (NSString *) details;
#endif
- (BOOL) detailsIsSet;

@end

@interface AccountException : NSException <TBase, NSCoding> {
  int32_t __error_code;
  NSString * __message;
  NSString * __details;

  BOOL __error_code_isset;
  BOOL __message_isset;
  BOOL __details_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=error_code, setter=setError_code:) int32_t error_code;
@property (nonatomic, retain, getter=message, setter=setMessage:) NSString * message;
@property (nonatomic, retain, getter=details, setter=setDetails:) NSString * details;
#endif

- (id) init;
- (id) initWithError_code: (int32_t) error_code message: (NSString *) message details: (NSString *) details;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (int32_t) error_code;
- (void) setError_code: (int32_t) error_code;
#endif
- (BOOL) error_codeIsSet;

#if !__has_feature(objc_arc)
- (NSString *) message;
- (void) setMessage: (NSString *) message;
#endif
- (BOOL) messageIsSet;

#if !__has_feature(objc_arc)
- (NSString *) details;
- (void) setDetails: (NSString *) details;
#endif
- (BOOL) detailsIsSet;

@end

@protocol DataHub <NSObject>
- (double) get_version;  // throws TException
- (Connection *) open_connection: (ConnectionParams *) con_params;  // throws DBException *, TException
- (ResultSet *) create_repo: (Connection *) con repo_name: (NSString *) repo_name;  // throws DBException *, TException
- (ResultSet *) list_repos: (Connection *) con;  // throws DBException *, TException
- (ResultSet *) delete_repo: (Connection *) con repo_name: (NSString *) repo_name force_if_non_empty: (BOOL) force_if_non_empty;  // throws DBException *, TException
- (ResultSet *) list_tables: (Connection *) con repo_name: (NSString *) repo_name;  // throws DBException *, TException
- (ResultSet *) get_schema: (Connection *) con table_name: (NSString *) table_name;  // throws DBException *, TException
- (ResultSet *) execute_sql: (Connection *) con query: (NSString *) query query_params: (NSMutableArray *) query_params;  // throws DBException *, TException
- (BOOL) close_connection: (Connection *) con;  // throws DBException *, TException
- (BOOL) create_account: (NSString *) username email: (NSString *) email password: (NSString *) password app_id: (NSString *) app_id app_token: (NSString *) app_token;  // throws AccountException *, TException
- (BOOL) remove_account: (NSString *) username app_id: (NSString *) app_id app_token: (NSString *) app_token;  // throws AccountException *, TException
@end

@interface DataHubClient : NSObject <DataHub> {
  id <TProtocol> inProtocol;
  id <TProtocol> outProtocol;
}
- (id) initWithProtocol: (id <TProtocol>) protocol;
- (id) initWithInProtocol: (id <TProtocol>) inProtocol outProtocol: (id <TProtocol>) outProtocol;
@end

@interface DataHubProcessor : NSObject <TProcessor> {
  id <DataHub> mService;
  NSDictionary * mMethodMap;
}
- (id) initWithDataHub: (id <DataHub>) service;
- (id<DataHub>) service;
@end

@interface datahubConstants : NSObject {
}
+ (double) VERSION;
@end
