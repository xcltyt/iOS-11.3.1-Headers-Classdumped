/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/DOCTagsCollectionViewDelegate.h>
#import <libobjc.A.dylib/DOCThumbnailListener.h>
#import <libobjc.A.dylib/DOCThumbnailHolder.h>
#import <libobjc.A.dylib/FPItemCollectionDelegate.h>
#import <libobjc.A.dylib/DOCItemInfoPresenter.h>

@protocol DOCThumbnail;
@class FPItem, DOCDownloadButton, UIStackView, UIView, UIImageView, UIVisualEffectView, UILabel, NSProgress, NSLayoutConstraint, DOCVisualEffectLabel, NSArray, DOCTagsCollectionView, FPItemCollection, NSString;

@interface DOCItemInfoViewController : UIViewController <DOCTagsCollectionViewDelegate, DOCThumbnailListener, DOCThumbnailHolder, FPItemCollectionDelegate, DOCItemInfoPresenter> {

	BOOL _isInfoInPopoverMode;
	BOOL _isFirstTimeAppear;
	BOOL _viewDidAppear;
	DOCDownloadButton* _downloadButton;
	FPItem* _item;
	id<DOCThumbnail> _thumbnail;
	UIStackView* _stackView;
	UIView* _topContainerView;
	UIImageView* _imageView;
	UIVisualEffectView* _primaryVisualEffectView;
	UILabel* _primaryLabel;
	UIVisualEffectView* _secondaryVisualEffectView;
	UILabel* _secondaryLabel;
	UIView* _downloadButtonContainer;
	NSProgress* _observedProgress;
	NSLayoutConstraint* _firstSeparatorViewHeightConstraint;
	UIView* _infoContainerView;
	DOCVisualEffectLabel* _kindLabel;
	DOCVisualEffectLabel* _kindValue;
	DOCVisualEffectLabel* _sizeLabel;
	DOCVisualEffectLabel* _sizeValue;
	DOCVisualEffectLabel* _whereLabel;
	DOCVisualEffectLabel* _whereValue;
	DOCVisualEffectLabel* _createdLabel;
	DOCVisualEffectLabel* _createdValue;
	DOCVisualEffectLabel* _modifiedLabel;
	DOCVisualEffectLabel* _modifiedValue;
	NSLayoutConstraint* _secondSeparatorViewHeightConstraint;
	NSArray* _regularConstraints;
	NSArray* _largeTextConstraints;
	UIView* _tagsContainerView;
	DOCVisualEffectLabel* _tagsLabel;
	DOCTagsCollectionView* _tagsCollectionView;
	FPItem* _observedItem;
	FPItemCollection* _observedCollection;
	UIView* _firstSeparator;
	UIView* _secondSeparator;
	NSArray* _labelLabels;
	NSArray* _valueLabels;

}

@property (nonatomic,retain) UIStackView * stackView;                                                     //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) UIView * topContainerView;                                                   //@synthesize topContainerView=_topContainerView - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                                     //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * primaryVisualEffectView;                                //@synthesize primaryVisualEffectView=_primaryVisualEffectView - In the implementation block
@property (nonatomic,retain) UILabel * primaryLabel;                                                      //@synthesize primaryLabel=_primaryLabel - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * secondaryVisualEffectView;                              //@synthesize secondaryVisualEffectView=_secondaryVisualEffectView - In the implementation block
@property (nonatomic,retain) UILabel * secondaryLabel;                                                    //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (nonatomic,retain) UIView * downloadButtonContainer;                                            //@synthesize downloadButtonContainer=_downloadButtonContainer - In the implementation block
@property (nonatomic,retain) DOCDownloadButton * downloadButton;                                          //@synthesize downloadButton=_downloadButton - In the implementation block
@property (nonatomic,retain) NSProgress * observedProgress;                                               //@synthesize observedProgress=_observedProgress - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * firstSeparatorViewHeightConstraint;              //@synthesize firstSeparatorViewHeightConstraint=_firstSeparatorViewHeightConstraint - In the implementation block
@property (nonatomic,retain) UIView * infoContainerView;                                                  //@synthesize infoContainerView=_infoContainerView - In the implementation block
@property (nonatomic,retain) DOCVisualEffectLabel * kindLabel;                                            //@synthesize kindLabel=_kindLabel - In the implementation block
@property (nonatomic,retain) DOCVisualEffectLabel * kindValue;                                            //@synthesize kindValue=_kindValue - In the implementation block
@property (nonatomic,retain) DOCVisualEffectLabel * sizeLabel;                                            //@synthesize sizeLabel=_sizeLabel - In the implementation block
@property (nonatomic,retain) DOCVisualEffectLabel * sizeValue;                                            //@synthesize sizeValue=_sizeValue - In the implementation block
@property (nonatomic,retain) DOCVisualEffectLabel * whereLabel;                                           //@synthesize whereLabel=_whereLabel - In the implementation block
@property (nonatomic,retain) DOCVisualEffectLabel * whereValue;                                           //@synthesize whereValue=_whereValue - In the implementation block
@property (nonatomic,retain) DOCVisualEffectLabel * createdLabel;                                         //@synthesize createdLabel=_createdLabel - In the implementation block
@property (nonatomic,retain) DOCVisualEffectLabel * createdValue;                                         //@synthesize createdValue=_createdValue - In the implementation block
@property (nonatomic,retain) DOCVisualEffectLabel * modifiedLabel;                                        //@synthesize modifiedLabel=_modifiedLabel - In the implementation block
@property (nonatomic,retain) DOCVisualEffectLabel * modifiedValue;                                        //@synthesize modifiedValue=_modifiedValue - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * secondSeparatorViewHeightConstraint;                    //@synthesize secondSeparatorViewHeightConstraint=_secondSeparatorViewHeightConstraint - In the implementation block
@property (nonatomic,retain) NSArray * regularConstraints;                                                //@synthesize regularConstraints=_regularConstraints - In the implementation block
@property (nonatomic,retain) NSArray * largeTextConstraints;                                              //@synthesize largeTextConstraints=_largeTextConstraints - In the implementation block
@property (nonatomic,retain) UIView * tagsContainerView;                                                  //@synthesize tagsContainerView=_tagsContainerView - In the implementation block
@property (nonatomic,retain) DOCVisualEffectLabel * tagsLabel;                                            //@synthesize tagsLabel=_tagsLabel - In the implementation block
@property (nonatomic,retain) DOCTagsCollectionView * tagsCollectionView;                                  //@synthesize tagsCollectionView=_tagsCollectionView - In the implementation block
@property (nonatomic,retain) FPItem * observedItem;                                                       //@synthesize observedItem=_observedItem - In the implementation block
@property (assign,nonatomic) BOOL isFirstTimeAppear;                                                      //@synthesize isFirstTimeAppear=_isFirstTimeAppear - In the implementation block
@property (assign,nonatomic) BOOL viewDidAppear;                                                          //@synthesize viewDidAppear=_viewDidAppear - In the implementation block
@property (nonatomic,retain) FPItemCollection * observedCollection;                                       //@synthesize observedCollection=_observedCollection - In the implementation block
@property (nonatomic,retain) UIView * firstSeparator;                                                     //@synthesize firstSeparator=_firstSeparator - In the implementation block
@property (nonatomic,retain) UIView * secondSeparator;                                                    //@synthesize secondSeparator=_secondSeparator - In the implementation block
@property (nonatomic,retain) NSArray * labelLabels;                                                       //@synthesize labelLabels=_labelLabels - In the implementation block
@property (nonatomic,retain) NSArray * valueLabels;                                                       //@synthesize valueLabels=_valueLabels - In the implementation block
@property (assign,nonatomic) BOOL isInfoInPopoverMode;                                                    //@synthesize isInfoInPopoverMode=_isInfoInPopoverMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<DOCThumbnail> thumbnail;                                                  //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,retain) FPItem * item;                                                               //@synthesize item=_item - In the implementation block
-(void)collection:(id)arg1 didUpdateObservedItem:(id)arg2 ;
-(void)dataForCollectionShouldBeReloaded:(id)arg1 ;
-(void)collection:(id)arg1 didDeleteItemsAtIndexPaths:(id)arg2 ;
-(void)collection:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2 ;
-(void)collection:(id)arg1 didMoveItemsFromIndexPaths:(id)arg2 toIndexPaths:(id)arg3 ;
-(void)collection:(id)arg1 didPerformBatchUpdateWithReplayBlock:(/*^block*/id)arg2 ;
-(void)collection:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2 changes:(id)arg3 ;
-(void)setIsInfoInPopoverMode:(BOOL)arg1 ;
-(BOOL)isInfoInPopoverMode;
-(FPItem *)item;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)loadView;
-(void)setItem:(FPItem *)arg1 ;
-(DOCVisualEffectLabel *)sizeValue;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(UIImageView *)imageView;
-(UIStackView *)stackView;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSProgress *)observedProgress;
-(void)setObservedProgress:(NSProgress *)arg1 ;
-(UILabel *)secondaryLabel;
-(void)setSecondaryLabel:(UILabel *)arg1 ;
-(void)_buildConstraints;
-(void)setImageView:(UIImageView *)arg1 ;
-(id<DOCThumbnail>)thumbnail;
-(void)setThumbnail:(id<DOCThumbnail>)arg1 ;
-(void)setStackView:(UIStackView *)arg1 ;
-(void)setKindValue:(DOCVisualEffectLabel *)arg1 ;
-(UIVisualEffectView *)primaryVisualEffectView;
-(void)setPrimaryVisualEffectView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)secondaryVisualEffectView;
-(void)setSecondaryVisualEffectView:(UIVisualEffectView *)arg1 ;
-(DOCVisualEffectLabel *)kindValue;
-(DOCVisualEffectLabel *)sizeLabel;
-(void)setSizeLabel:(DOCVisualEffectLabel *)arg1 ;
-(UILabel *)primaryLabel;
-(void)setPrimaryLabel:(UILabel *)arg1 ;
-(void)setRegularConstraints:(NSArray *)arg1 ;
-(void)setLargeTextConstraints:(NSArray *)arg1 ;
-(NSArray *)regularConstraints;
-(NSArray *)largeTextConstraints;
-(void)updatePreferredContentSize;
-(BOOL)viewDidAppear;
-(void)setViewDidAppear:(BOOL)arg1 ;
-(void)setLabelLabels:(NSArray *)arg1 ;
-(UIView *)downloadButtonContainer;
-(DOCDownloadButton *)downloadButton;
-(void)userDidTapDownloadButton:(id)arg1 ;
-(DOCVisualEffectLabel *)kindLabel;
-(void)setupLabel:(id)arg1 text:(id)arg2 ;
-(DOCVisualEffectLabel *)whereLabel;
-(DOCVisualEffectLabel *)createdLabel;
-(DOCVisualEffectLabel *)modifiedLabel;
-(DOCVisualEffectLabel *)tagsLabel;
-(void)setupValue:(id)arg1 ;
-(DOCTagsCollectionView *)tagsCollectionView;
-(NSLayoutConstraint *)firstSeparatorViewHeightConstraint;
-(NSLayoutConstraint *)secondSeparatorViewHeightConstraint;
-(void)updateThumbnailWithItem:(id)arg1 ;
-(NSArray *)labelLabels;
-(void)adjustLabel:(id)arg1 forLargeText:(BOOL)arg2 ;
-(void)registerObservedItem:(id)arg1 ;
-(void)_updateNavigationItem:(BOOL)arg1 ;
-(void)setObservedItem:(FPItem *)arg1 ;
-(void)updateDownloadButton;
-(DOCVisualEffectLabel *)whereValue;
-(DOCVisualEffectLabel *)createdValue;
-(DOCVisualEffectLabel *)modifiedValue;
-(void)updateInfoViewWithItem:(id)arg1 ;
-(void)updatePrimaryTitleWithItem:(id)arg1 ;
-(void)updateSecondaryTitleWithItem:(id)arg1 ;
-(void)updateAttributesWithItem:(id)arg1 ;
-(void)updateTagsWithItem:(id)arg1 ;
-(UIView *)firstSeparator;
-(void)setFirstSeparatorViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(UIView *)secondSeparator;
-(void)setSecondSeparatorViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(UIView *)topContainerView;
-(UIView *)infoContainerView;
-(UIView *)tagsContainerView;
-(void)_buildRegularConstraints;
-(void)_buildLargeTextConstraints;
-(void)tagView:(id)arg1 didDeleteTag:(id)arg2 ;
-(void)tagsCollectionViewDidSelectAddTagButton:(id)arg1 ;
-(void)thumbnailLoaded:(id)arg1 ;
-(void)displayTagView;
-(void)setDownloadButton:(DOCDownloadButton *)arg1 ;
-(void)setTopContainerView:(UIView *)arg1 ;
-(void)setDownloadButtonContainer:(UIView *)arg1 ;
-(void)setInfoContainerView:(UIView *)arg1 ;
-(void)setKindLabel:(DOCVisualEffectLabel *)arg1 ;
-(void)setSizeValue:(DOCVisualEffectLabel *)arg1 ;
-(void)setWhereLabel:(DOCVisualEffectLabel *)arg1 ;
-(void)setWhereValue:(DOCVisualEffectLabel *)arg1 ;
-(void)setCreatedLabel:(DOCVisualEffectLabel *)arg1 ;
-(void)setCreatedValue:(DOCVisualEffectLabel *)arg1 ;
-(void)setModifiedLabel:(DOCVisualEffectLabel *)arg1 ;
-(void)setModifiedValue:(DOCVisualEffectLabel *)arg1 ;
-(void)setTagsContainerView:(UIView *)arg1 ;
-(void)setTagsLabel:(DOCVisualEffectLabel *)arg1 ;
-(void)setTagsCollectionView:(DOCTagsCollectionView *)arg1 ;
-(FPItem *)observedItem;
-(BOOL)isFirstTimeAppear;
-(void)setIsFirstTimeAppear:(BOOL)arg1 ;
-(FPItemCollection *)observedCollection;
-(void)setObservedCollection:(FPItemCollection *)arg1 ;
-(void)setFirstSeparator:(UIView *)arg1 ;
-(void)setSecondSeparator:(UIView *)arg1 ;
-(void)setValueLabels:(NSArray *)arg1 ;
-(NSArray *)valueLabels;
@end
