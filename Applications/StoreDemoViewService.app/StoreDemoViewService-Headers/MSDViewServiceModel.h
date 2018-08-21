//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_xpc_object>, NSString;

@interface MSDViewServiceModel : NSObject
{
    NSString *_errorMessage;
    NSObject<OS_xpc_object> *_xpc_conn;
    NSMutableArray *_errors;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *errors; // @synthesize errors=_errors;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpc_conn; // @synthesize xpc_conn=_xpc_conn;
@property(retain) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
- (void).cxx_destruct;
- (id)errorMessageFromErrors;
- (void)handleMessage:(id)arg1;
- (void)handleContentUpdateStatus:(const char *)arg1 event:(id)arg2;
- (void)acceptErrorsAndProgress;
- (id)init;

@end

