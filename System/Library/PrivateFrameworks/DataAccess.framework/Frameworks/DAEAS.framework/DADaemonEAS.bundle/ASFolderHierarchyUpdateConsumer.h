/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DADaemonEAS.bundle/DADaemonEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ASFolderHierarchyUpdateConsumer <NSObject>
@required
-(void)folderHierarchySuccessfullyUpdated:(id)arg1 withNumChangedFolders:(unsigned long long)arg2;
-(void)folderHierarchyFailedToUpdate:(id)arg1 withStatus:(long long)arg2 andError:(id)arg3;

@end

