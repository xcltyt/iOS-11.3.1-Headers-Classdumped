/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/_ML3DatabaseConnectionPoolDiagnostic.h>

@class NSArray;

@interface _ML3MutableDatabaseConnectionPoolDiagnostic : _ML3DatabaseConnectionPoolDiagnostic

@property (nonatomic,copy) NSArray * readerAvailableConnections; 
@property (nonatomic,copy) NSArray * readerBusyConnections; 
@property (nonatomic,copy) NSArray * writerAvailableConnections; 
@property (nonatomic,copy) NSArray * writerBusyConnections; 
-(void)setReaderAvailableConnections:(NSArray *)arg1 ;
-(void)setReaderBusyConnections:(NSArray *)arg1 ;
-(void)setWriterAvailableConnections:(NSArray *)arg1 ;
-(void)setWriterBusyConnections:(NSArray *)arg1 ;
@end
