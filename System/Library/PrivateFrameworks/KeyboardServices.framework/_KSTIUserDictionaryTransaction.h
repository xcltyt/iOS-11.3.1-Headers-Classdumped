/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _KSTIUserDictionaryEntryValue;

@interface _KSTIUserDictionaryTransaction : NSObject <NSSecureCoding> {

	_KSTIUserDictionaryEntryValue* _valueToDelete;
	_KSTIUserDictionaryEntryValue* _valueToInsert;

}

@property (nonatomic,retain) _KSTIUserDictionaryEntryValue * valueToDelete;              //@synthesize valueToDelete=_valueToDelete - In the implementation block
@property (nonatomic,retain) _KSTIUserDictionaryEntryValue * valueToInsert;              //@synthesize valueToInsert=_valueToInsert - In the implementation block
+(BOOL)supportsSecureCoding;
-(_KSTIUserDictionaryEntryValue *)valueToDelete;
-(void)setValueToDelete:(_KSTIUserDictionaryEntryValue *)arg1 ;
-(_KSTIUserDictionaryEntryValue *)valueToInsert;
-(void)setValueToInsert:(_KSTIUserDictionaryEntryValue *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
@end
