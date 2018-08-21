/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <CoreLocation/CLPlacemark.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class NSString;

@interface MKPlacemark : CLPlacemark <MKAnnotation>

@property (nonatomic,readonly) NSString * countryCode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
-(CLLocationCoordinate2D)coordinate;
-(NSString *)countryCode;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 ;
-(id)thoroughfare;
-(NSString *)title;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 postalAddress:(id)arg2 ;
-(id)mkPostalAddressDictionary;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 addressDictionary:(id)arg2 ;
@end
