//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol MASignInAlertDelegate;

@protocol MASignInAlert <NSObject>
@property(readonly, copy, nonatomic) NSString *password;
@property(readonly, copy, nonatomic) NSString *username;
@property id <MASignInAlertDelegate> delegate;
- (void)showWithTitle:(NSString *)arg1 username:(NSString *)arg2;
- (void)showWithTitle:(NSString *)arg1;
@end

