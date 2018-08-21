/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/NotesSettings.bundle/NotesSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@interface ICSinglePixelLineView : UIView {

	BOOL _hasSetUpSizeConstraint;

}

@property (assign,nonatomic) BOOL hasSetUpSizeConstraint;              //@synthesize hasSetUpSizeConstraint=_hasSetUpSizeConstraint - In the implementation block
-(void)setUpHeightConstraintIfNecessary;
-(BOOL)hasSetUpSizeConstraint;
-(id)findSizeLayoutConstraintIfExists;
-(id)addSizeConstraint;
-(void)setHasSetUpSizeConstraint:(BOOL)arg1 ;
-(void)updateConstraints;
@end
