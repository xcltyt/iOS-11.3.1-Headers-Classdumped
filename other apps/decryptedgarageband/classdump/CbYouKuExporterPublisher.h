//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CbExporterPublisher.h"

@class CbYouKuExporterViewController, NSMutableDictionary;

@interface CbYouKuExporterPublisher : CbExporterPublisher
{
    NSMutableDictionary *_metaData;
    CbYouKuExporterViewController *_exporterViewController;
}

- (void).cxx_destruct;
- (void)songUploadDidFail:(id)arg1 error:(id)arg2;
- (void)songUploadDidFinish:(id)arg1 info:(id)arg2;
- (void)signInFailed:(id)arg1 error:(id)arg2;
- (id)signInUsername;
- (void)dismissViewController;
- (id)mailBodyFormat;
- (id)mailSubject;
- (void)startPublish;
- (id)songInformationForUpload;
- (void)show;
- (id)exporterViewController;
@property(nonatomic) NSMutableDictionary *metaData; // @dynamic metaData;
- (void)dealloc;
- (id)initWithParentViewController:(id)arg1;

@end
