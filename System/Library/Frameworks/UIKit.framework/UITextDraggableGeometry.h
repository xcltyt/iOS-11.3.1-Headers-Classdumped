/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITextDraggableGeometry <NSObject>
@property (assign,nonatomic) long long geometryOptions; 
@required
-(id)textRangesForAttachmentsInTextRange:(id)arg1;
-(id)textRangeForAttachmentInTextRange:(id)arg1 atPoint:(CGPoint)arg2;
-(id)draggableObjectsForTextRange:(id)arg1;
-(void)setGeometryOptions:(long long)arg1;
-(id)previewForDroppingText:(id)arg1 toPosition:(id)arg2 inContainerView:(id)arg3;
-(long long)geometryOptions;

@end
