/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, UIPrintInteractionControllerDelegate, UIPrintInteractionControllerActivityDelegate;
#import <UIKit/UIKit-Structs.h>
@class NSObject, UIPrintInfo, UIPrintPaper, UIPrintPageRenderer, UIPrintFormatter, NSArray, PKPrinter;

@interface UIPrintInteractionController : NSObject {

	BOOL _hidesNumberOfCopies;
	BOOL _isManagedContent;
	/*^block*/id _completionHandler;
	unsigned long long _backgroundTaskIdentifier;
	NSObject*<OS_dispatch_queue> _previewQueue;
	id _printState;
	id _temporaryRetainCycle;
	BOOL _showsPageRange;
	BOOL _showsPaperSelectionForLoadedPapers;
	UIPrintInfo* _printInfo;
	id<UIPrintInteractionControllerDelegate> _delegate;
	UIPrintPaper* _printPaper;
	UIPrintPageRenderer* _printPageRenderer;
	UIPrintFormatter* _printFormatter;
	id _printingItem;
	NSArray* _printingItems;
	id<UIPrintInteractionControllerActivityDelegate> _printActivityDelegate;

}

@property (assign,nonatomic,__weak) id<UIPrintInteractionControllerActivityDelegate> printActivityDelegate;              //@synthesize printActivityDelegate=_printActivityDelegate - In the implementation block
@property (nonatomic,readonly) long long pageCount; 
@property (nonatomic,retain) NSArray * pageRanges; 
@property (nonatomic,retain) PKPrinter * printer; 
@property (nonatomic,retain) UIPrintPaper * paper; 
@property (assign,nonatomic) BOOL isManagedContent;                                                                      //@synthesize isManagedContent=_isManagedContent - In the implementation block
@property (nonatomic,retain) UIPrintInfo * printInfo;                                                                    //@synthesize printInfo=_printInfo - In the implementation block
@property (assign,nonatomic,__weak) id<UIPrintInteractionControllerDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsPageRange;                                                                        //@synthesize showsPageRange=_showsPageRange - In the implementation block
@property (assign,nonatomic) BOOL showsNumberOfCopies; 
@property (assign,nonatomic) BOOL showsPaperSelectionForLoadedPapers;                                                    //@synthesize showsPaperSelectionForLoadedPapers=_showsPaperSelectionForLoadedPapers - In the implementation block
@property (nonatomic,readonly) UIPrintPaper * printPaper;                                                                //@synthesize printPaper=_printPaper - In the implementation block
@property (nonatomic,retain) UIPrintPageRenderer * printPageRenderer;                                                    //@synthesize printPageRenderer=_printPageRenderer - In the implementation block
@property (nonatomic,retain) UIPrintFormatter * printFormatter;                                                          //@synthesize printFormatter=_printFormatter - In the implementation block
@property (nonatomic,copy) id printingItem;                                                                              //@synthesize printingItem=_printingItem - In the implementation block
@property (nonatomic,copy) NSArray * printingItems;                                                                      //@synthesize printingItems=_printingItems - In the implementation block
+(id)sharedPrintController;
+(BOOL)isPrintingAvailable;
+(id)printableUTIs;
+(BOOL)canPrintURL:(id)arg1 ;
+(BOOL)canPrintData:(id)arg1 ;
-(id)init;
-(id<UIPrintInteractionControllerDelegate>)delegate;
-(void)setDelegate:(id<UIPrintInteractionControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)_init;
-(UIPrintInfo *)printInfo;
-(BOOL)savePDFToURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setPrintPageRenderer:(UIPrintPageRenderer *)arg1 ;
-(void)setPrintFormatter:(UIPrintFormatter *)arg1 ;
-(void)setPrintInfo:(UIPrintInfo *)arg1 ;
-(void)dismissAnimated:(BOOL)arg1 ;
-(PKPrinter *)printer;
-(void)setPrinter:(PKPrinter *)arg1 ;
-(long long)pageCount;
-(BOOL)_setupPrintPanel:(/*^block*/id)arg1 ;
-(void)setPaper:(UIPrintPaper *)arg1 ;
-(void)_cleanPrintState;
-(void)_generatePrintPreview:(/*^block*/id)arg1 ;
-(NSArray *)pageRanges;
-(void)setPageRanges:(NSArray *)arg1 ;
-(BOOL)presentFromRect:(CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)presentAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)presentFromBarButtonItem:(id)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(UIPrintPageRenderer *)printPageRenderer;
-(id)_currentPrintInfo;
-(BOOL)_canShowColor;
-(UIPrintPaper *)paper;
-(void)_printPanelDidPresent;
-(void)_printPanelWillDismiss:(BOOL)arg1 ;
-(void)_printPanelDidDismiss;
-(void)_cancelAllPreviewGeneration;
-(void)_updatePageCount;
-(CGSize)_printItemContentSize;
-(BOOL)_canShowDuplex;
-(BOOL)_canShowPageRange;
-(BOOL)_canShowCopies;
-(BOOL)_canShowPaperList;
-(BOOL)_canShowPreview;
-(BOOL)_canShowStaple;
-(BOOL)_canShowAnnotations;
-(void)_endPrintJob:(BOOL)arg1 error:(id)arg2 ;
-(void)_ensurePDFIsUnlockedFirstAttempt:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_printingItemIsReallyTallPDF;
-(void)_setPrintInfoState:(int)arg1 ;
-(BOOL)_canPrintPDFURL:(id)arg1 ;
-(BOOL)_canPrintPDFData:(id)arg1 ;
-(id)printingItem;
-(id)_paperForPDFItem:(id)arg1 withDuplexMode:(long long)arg2 ;
-(void)_updatePrintPaper;
-(id)_newPDFPreviewURLWithPath:(id)arg1 isManagedContent:(BOOL)arg2 ;
-(CGContextRef)_newSaveContext:(id)arg1 withMediaRect:(CGRect)arg2 ;
-(void)_startPrinting;
-(void)_updateCutterBehavior;
-(CGSize)_printablePDFURLSize:(id)arg1 ;
-(CGSize)_printablePDFDataSize:(id)arg1 ;
-(double)_getCutLengthFromDelegateForPaper:(id)arg1 ;
-(id)_getChosenPaperFromDelegateForPaperList:(id)arg1 ;
-(id)_paperForContentType:(long long)arg1 ;
-(void)_preparePrintInfo;
-(void)_printPage;
-(id)_printPageRenderer:(id)arg1 ;
-(id)_printItem:(id)arg1 ;
-(void)setPrintingItem:(id)arg1 ;
-(BOOL)printToPrinter:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)showsNumberOfCopies;
-(void)setShowsNumberOfCopies:(BOOL)arg1 ;
-(BOOL)_canShowPunch;
-(BOOL)showsPageRange;
-(void)setShowsPageRange:(BOOL)arg1 ;
-(BOOL)showsPaperSelectionForLoadedPapers;
-(void)setShowsPaperSelectionForLoadedPapers:(BOOL)arg1 ;
-(UIPrintPaper *)printPaper;
-(UIPrintFormatter *)printFormatter;
-(NSArray *)printingItems;
-(void)setPrintingItems:(NSArray *)arg1 ;
-(id<UIPrintInteractionControllerActivityDelegate>)printActivityDelegate;
-(void)setPrintActivityDelegate:(id<UIPrintInteractionControllerActivityDelegate>)arg1 ;
-(BOOL)isManagedContent;
-(void)setIsManagedContent:(BOOL)arg1 ;
-(void)_enableManualPrintPage:(BOOL)arg1 ;
-(void)_manualPrintPage;
-(void)_cancelManualPrintPage;
@end
