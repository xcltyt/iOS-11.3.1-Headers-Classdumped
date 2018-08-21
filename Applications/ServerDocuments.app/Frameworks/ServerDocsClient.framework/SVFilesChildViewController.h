/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 21, 2018 at 11:42:38 PM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /Applications/ServerDocuments.app/Frameworks/ServerDocsClient.framework/ServerDocsClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class SVViewOptionsHeaderView, UIScrollView;


@protocol SVFilesChildViewController <NSObject>
@property (nonatomic,readonly) SVViewOptionsHeaderView * viewOptionsHeaderView; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@required
-(SVViewOptionsHeaderView *)viewOptionsHeaderView;
-(id)showDownloadProgressForItem:(id)arg1;
-(void)cancelDownloadProgressForItem:(id)arg1;
-(void)scrollItemToVisible:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)flashToEmphasizeItem:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(UIScrollView *)scrollView;

@end
