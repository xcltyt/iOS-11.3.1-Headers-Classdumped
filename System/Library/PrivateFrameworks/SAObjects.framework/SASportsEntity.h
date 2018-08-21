/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSURL, NSDictionary, SASportsLeague, NSString, SAUIAppPunchOut, NSArray;

@interface SASportsEntity : SADomainObject

@property (nonatomic,copy) NSURL * image; 
@property (nonatomic,copy) NSDictionary * images; 
@property (nonatomic,copy) NSURL * largeImage; 
@property (nonatomic,copy) NSDictionary * largeImages; 
@property (nonatomic,retain) SASportsLeague * league; 
@property (nonatomic,copy) NSURL * listImage; 
@property (nonatomic,copy) NSDictionary * listImages; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) SAUIAppPunchOut * punchout; 
@property (nonatomic,copy) NSArray * themeImages; 
+(id)entity;
+(id)entityWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SAUIAppPunchOut *)punchout;
-(void)setImage:(NSURL *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSURL *)image;
-(NSDictionary *)images;
-(void)setImages:(NSDictionary *)arg1 ;
-(id)encodedClassName;
-(NSArray *)themeImages;
-(void)setThemeImages:(NSArray *)arg1 ;
-(NSDictionary *)largeImages;
-(void)setLargeImages:(NSDictionary *)arg1 ;
-(SASportsLeague *)league;
-(void)setLeague:(SASportsLeague *)arg1 ;
-(NSURL *)listImage;
-(void)setListImage:(NSURL *)arg1 ;
-(NSDictionary *)listImages;
-(void)setListImages:(NSDictionary *)arg1 ;
-(void)setLargeImage:(NSURL *)arg1 ;
-(NSURL *)largeImage;
-(void)setPunchout:(SAUIAppPunchOut *)arg1 ;
@end
