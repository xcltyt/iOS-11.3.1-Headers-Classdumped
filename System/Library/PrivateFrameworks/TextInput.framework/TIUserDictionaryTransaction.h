/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class TIUserDictionaryEntryValue;

@interface TIUserDictionaryTransaction : NSObject <NSSecureCoding> {

	TIUserDictionaryEntryValue* _valueToDelete;
	TIUserDictionaryEntryValue* _valueToInsert;

}

@property (nonatomic,retain) TIUserDictionaryEntryValue * valueToDelete;              //@synthesize valueToDelete=_valueToDelete - In the implementation block
@property (nonatomic,retain) TIUserDictionaryEntryValue * valueToInsert;              //@synthesize valueToInsert=_valueToInsert - In the implementation block
+(BOOL)supportsSecureCoding;
-(TIUserDictionaryEntryValue *)valueToDelete;
-(void)setValueToDelete:(TIUserDictionaryEntryValue *)arg1 ;
-(TIUserDictionaryEntryValue *)valueToInsert;
-(void)setValueToInsert:(TIUserDictionaryEntryValue *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
@end
