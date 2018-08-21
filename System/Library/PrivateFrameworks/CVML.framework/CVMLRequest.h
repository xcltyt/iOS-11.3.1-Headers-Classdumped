/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CVML.framework/CVML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CVML/CVML-Structs.h>
#import <CVML/CVMLWarningRecorder.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSString, NSDictionary, CVMLDetector, CVMLWarningRecorder, NSObject, NSArray;

@interface CVMLRequest : NSObject <CVMLWarningRecorder> {

	NSString* _requestName;
	NSDictionary* _options;
	CVMLDetector* _detector;
	CVMLWarningRecorder* _warningRecorder;
	NSObject*<OS_dispatch_semaphore> _cancellationSemaphore;
	NSObject*<OS_dispatch_queue> _cancellationQueue;
	BOOL _cancellable;
	NSArray* _results;
	/*^block*/id _completionHandler;
	CGRect _roi;

}

@property (retain) NSObject*<OS_dispatch_semaphore> cancellationSemaphore;              //@synthesize cancellationSemaphore=_cancellationSemaphore - In the implementation block
@property (assign) BOOL cancellable;                                                    //@synthesize cancellable=_cancellable - In the implementation block
@property (assign) CGRect roi;                                                          //@synthesize roi=_roi - In the implementation block
@property (readonly) NSString * requestName;                                            //@synthesize requestName=_requestName - In the implementation block
@property (readonly) NSDictionary * options;                                            //@synthesize options=_options - In the implementation block
@property (readonly) NSArray * results;                                                 //@synthesize results=_results - In the implementation block
@property (nonatomic,copy) id completionHandler;                                        //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)getPixelFocalLength:(float*)arg1 inOptions:(id)arg2 withDefaultValue:(float)arg3 error:(id*)arg4 ;
+(void)recordDefaultOptionsInDictionary:(id)arg1 ;
+(id)requestWithName:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(BOOL)getOptionalArray:(id*)arg1 forKey:(id)arg2 inOptions:(id)arg3 withElementsOfClass:(Class)arg4 error:(id*)arg5 ;
+(BOOL)getOptionalObject:(id*)arg1 ofClass:(Class)arg2 forKey:(id)arg3 inOptions:(id)arg4 error:(id*)arg5 ;
+(BOOL)getRequiredObject:(id*)arg1 ofClass:(Class)arg2 forKey:(id)arg3 inOptions:(id)arg4 error:(id*)arg5 ;
+(BOOL)getDoubleValue:(double*)arg1 forKey:(id)arg2 inOptions:(id)arg3 error:(id*)arg4 ;
+(BOOL)getDoubleValue:(double*)arg1 forKey:(id)arg2 inOptions:(id)arg3 withDefaultValue:(double)arg4 error:(id*)arg5 ;
+(BOOL)getFloatValue:(float*)arg1 forKey:(id)arg2 inOptions:(id)arg3 error:(id*)arg4 ;
+(BOOL)getFloatValue:(float*)arg1 forKey:(id)arg2 inOptions:(id)arg3 withDefaultValue:(float)arg4 error:(id*)arg5 ;
+(BOOL)getOptionalInputFacesArray:(id*)arg1 inOptions:(id)arg2 error:(id*)arg3 ;
+(id)requestWithName:(id)arg1 options:(id)arg2 ;
-(CGRect)roi;
-(void)cancel;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(NSDictionary *)options;
-(NSArray *)results;
-(void)setResults:(NSArray *)arg1 ;
-(NSString *)requestName;
-(BOOL)internalProcessWithHandler:(id)arg1 error:(id*)arg2 ;
-(BOOL)internalCancelRequestWithHandler:(id)arg1 error:(id*)arg2 ;
-(BOOL)processWithHandler:(id)arg1 error:(id*)arg2 ;
-(id)imageRequestHandlerForHandler:(id)arg1 error:(id*)arg2 ;
-(BOOL)cancellable;
-(void)setRoi:(CGRect)arg1 ;
-(id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)recordWarning:(id)arg1 value:(id)arg2 ;
-(id)valueForWarning:(id)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)cancellationSemaphore;
-(void)setCancellationSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)setCancellable:(BOOL)arg1 ;
-(id)warnings;
@end
