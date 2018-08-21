/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CourseKit.framework/CourseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKSharedDatabase, NSManagedObjectContext;

@interface CKCourseLibrary : NSObject {

	CKSharedDatabase* _sharedDatabase;
	NSManagedObjectContext* _moc;

}

@property (nonatomic,retain) CKSharedDatabase * sharedDatabase;              //@synthesize sharedDatabase=_sharedDatabase - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * moc;                   //@synthesize moc=_moc - In the implementation block
+(id)sharedDocumentsDirectory;
+(id)sharedCourseLibrary;
+(BOOL)isCourseLibraryAvailable;
+(BOOL)openCourse:(id)arg1 ;
-(CKSharedDatabase *)sharedDatabase;
-(id)init;
-(NSManagedObjectContext *)moc;
-(void)setMoc:(NSManagedObjectContext *)arg1 ;
-(id)allCourses;
-(id)courseWithCourseID:(id)arg1 ;
-(id)courseLibrayVersion;
-(void)setSharedDatabase:(CKSharedDatabase *)arg1 ;
@end
