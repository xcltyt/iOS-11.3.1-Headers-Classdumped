//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DfControllerInfo : NSObject
{
    CDStruct_5115be14 m_GeneralizedController;
    long long m_eventMinValue;
    long long m_eventDefaultValue;
    long long m_eventMaxValue;
    float m_displayMinValue;
    float m_displayDefaultValue;
    float m_displayMaxValue;
    NSString *m_Unit;
    NSString *m_Name;
    NSString *m_ParentName;
    unsigned int m_IsContinous:1;
    unsigned int m_IsCenterBased:1;
    unsigned int m_IsQuantized:1;
    id m_retainedObj;
}

+ (id)controllerInfoFromGeneralizedController:(CDStruct_5115be14)arg1 andObject:(id)arg2 retainObject:(_Bool)arg3;
- (void).cxx_destruct;
- (id)stringFromEventValue:(long long)arg1;
- (void)setParentName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setIsQuantized:(_Bool)arg1;
- (void)setIsCenterBased:(_Bool)arg1;
- (void)setIsContinous:(_Bool)arg1;
- (void)setUnit:(id)arg1;
- (void)setDisplayMaxValue:(float)arg1;
- (void)setDisplayDefaultValue:(float)arg1;
- (void)setDisplayMinValue:(float)arg1;
- (void)setEventMaxValue:(long long)arg1;
- (void)setEventDefaultValue:(long long)arg1;
- (void)setEventMinValue:(long long)arg1;
- (void)setGeneralizedController:(CDStruct_5115be14)arg1;
- (float)currentNormalizedValue;
- (long long)currentEventValue;
- (id)parentName;
- (id)name;
- (_Bool)isQuantized;
- (_Bool)isCenterBased;
- (_Bool)isContinous;
- (id)unit;
- (float)displayMaxValue;
- (float)displayDefaultValue;
- (float)displayMinValue;
- (long long)eventMaxValue;
- (long long)eventDefaultValue;
- (long long)eventMinValue;
- (CDStruct_5115be14)generalizedController;

@end

