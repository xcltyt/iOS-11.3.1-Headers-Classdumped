/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDAnnotationHosting.h>

@protocol TSKModel;
@class TSKAnnotationAuthor, NSDate, NSString, TSDCommentStorage, TSWPChange;

@interface TSWPChangeDetails : NSObject <TSDAnnotationHosting> {

	NSString* mChangeString;
	id<TSKModel> model;
	TSWPChange* _change;

}

@property (nonatomic,retain) TSWPChange * change;                            //@synthesize change=_change - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int annotationType; 
@property (nonatomic,readonly) int annotationDisplayStringType; 
@property (nonatomic,retain) TSKAnnotationAuthor * author; 
@property (nonatomic,readonly) NSDate * date; 
@property (assign,nonatomic) id<TSKModel> model; 
@property (nonatomic,readonly) NSString * changeTrackingString; 
@property (nonatomic,copy) TSDCommentStorage * storage; 
-(TSKAnnotationAuthor *)author;
-(void)setAuthor:(TSKAnnotationAuthor *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<TSKModel>)model;
-(TSWPChange *)change;
-(void)setModel:(id<TSKModel>)arg1 ;
-(int)annotationType;
-(int)annotationDisplayStringType;
-(void)setChange:(TSWPChange *)arg1 ;
-(BOOL)isEqualToChangeDetails:(id)arg1 ;
-(NSString *)changeTrackingString;
-(id)initWithChange:(id)arg1 changeString:(id)arg2 ;
-(void)commitText:(id)arg1 ;
@end
