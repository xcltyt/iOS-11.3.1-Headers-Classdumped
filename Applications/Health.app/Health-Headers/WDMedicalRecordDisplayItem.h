//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HKInspectableValueInRange, HKMedicalRecord, HKUIMetricColors, NSString, UIColor, UIImage, WDMedicalRecordCategorySummary;

@interface WDMedicalRecordDisplayItem : NSObject
{
    _Bool _extraTopPadding;
    _Bool _separatorHidden;
    long long _displayItemType;
    long long _separatorStyle;
    long long _placement;
    long long _recordCategoryType;
    NSString *_title;
    NSString *_subtitle;
    UIImage *_image;
    UIColor *_backgroundColor;
    HKUIMetricColors *_metricColors;
    HKInspectableValueInRange *_chartValueWithRange;
    NSString *_valueString;
    HKMedicalRecord *_medicalRecord;
    WDMedicalRecordCategorySummary *_categorySummary;
    id <HKClinicalBrandable> _brandableObject;
    struct UIEdgeInsets _separatorInsets;
}

+ (id)standaloneItem;
+ (id)accountSourceItem;
+ (id)sectionHeaderItem;
+ (id)detailSubtitleItemWithTitle:(id)arg1 subtitle:(id)arg2;
+ (id)detailSubtitleItem;
+ (id)detailTitleItemWithTitle:(id)arg1 subtitle:(id)arg2;
+ (id)detailTitleItem;
+ (id)timelineSummaryPanelTitleItem;
+ (id)timelineSummaryAppendixItem;
+ (id)timelineSummaryReferenceRangeItem;
+ (id)timelineSummaryValueItem;
+ (id)timelineSummaryContentWithSubtitleItem;
+ (id)timelineSummaryContentItem;
+ (id)timelineSummarySourceTitleItem;
+ (id)timelineSummaryCategoryMinimizedItemWithCategoryType:(long long)arg1;
+ (id)timelineSummaryCategoryMinimizedItem;
+ (id)timelineSummaryDetailCategoryTitleItemWithMedicalRecord:(id)arg1;
+ (id)timelineSummaryCategoryTitleItemWithCategoryType:(long long)arg1;
+ (id)timelineSummaryCategoryTitleItem;
+ (id)recordCardItem;
@property(retain, nonatomic) id <HKClinicalBrandable> brandableObject; // @synthesize brandableObject=_brandableObject;
@property(nonatomic) __weak WDMedicalRecordCategorySummary *categorySummary; // @synthesize categorySummary=_categorySummary;
@property(retain, nonatomic) HKMedicalRecord *medicalRecord; // @synthesize medicalRecord=_medicalRecord;
@property(retain, nonatomic) NSString *valueString; // @synthesize valueString=_valueString;
@property(retain, nonatomic) HKInspectableValueInRange *chartValueWithRange; // @synthesize chartValueWithRange=_chartValueWithRange;
@property(retain, nonatomic) HKUIMetricColors *metricColors; // @synthesize metricColors=_metricColors;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long recordCategoryType; // @synthesize recordCategoryType=_recordCategoryType;
@property(nonatomic) long long placement; // @synthesize placement=_placement;
@property(nonatomic) struct UIEdgeInsets separatorInsets; // @synthesize separatorInsets=_separatorInsets;
@property(nonatomic) _Bool separatorHidden; // @synthesize separatorHidden=_separatorHidden;
@property(nonatomic) long long separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property(nonatomic) _Bool extraTopPadding; // @synthesize extraTopPadding=_extraTopPadding;
@property(nonatomic) long long displayItemType; // @synthesize displayItemType=_displayItemType;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

