//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMIPDeviceCommand.h"

@class NSData, NSString;

@interface EraseDeviceCommand : FMIPDeviceCommand
{
    _Bool _userText;
    NSString *_passcode;
    NSString *_ownerNumber;
    NSString *_message;
    NSData *_recoverySessionId;
}

@property(copy, nonatomic) NSData *recoverySessionId; // @synthesize recoverySessionId=_recoverySessionId;
@property(nonatomic) _Bool userText; // @synthesize userText=_userText;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *ownerNumber; // @synthesize ownerNumber=_ownerNumber;
@property(copy, nonatomic) NSString *passcode; // @synthesize passcode=_passcode;
- (void).cxx_destruct;
- (id)jsonBodyDictionary;
- (id)path;

@end

