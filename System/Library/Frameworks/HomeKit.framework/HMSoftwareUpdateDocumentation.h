/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMHTMLDocument, NSNumber;

@interface HMSoftwareUpdateDocumentation : NSObject <NSSecureCoding> {

	HMHTMLDocument* _releaseNotesSummary;
	HMHTMLDocument* _releaseNotes;
	HMHTMLDocument* _licenseAgreement;
	NSNumber* _licenseAgreementVersion;

}

@property (copy,readonly) HMHTMLDocument * releaseNotesSummary;              //@synthesize releaseNotesSummary=_releaseNotesSummary - In the implementation block
@property (copy,readonly) HMHTMLDocument * releaseNotes;                     //@synthesize releaseNotes=_releaseNotes - In the implementation block
@property (copy,readonly) HMHTMLDocument * licenseAgreement;                 //@synthesize licenseAgreement=_licenseAgreement - In the implementation block
@property (copy,readonly) NSNumber * licenseAgreementVersion;                //@synthesize licenseAgreementVersion=_licenseAgreementVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(HMHTMLDocument *)releaseNotes;
-(NSNumber *)licenseAgreementVersion;
-(HMHTMLDocument *)licenseAgreement;
-(HMHTMLDocument *)releaseNotesSummary;
-(id)initWithReleaseNotesSummary:(id)arg1 releaseNotes:(id)arg2 licenseAgreement:(id)arg3 licenseAgreementVersion:(id)arg4 ;
@end
