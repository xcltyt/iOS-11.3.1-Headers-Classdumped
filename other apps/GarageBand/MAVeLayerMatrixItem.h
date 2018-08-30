//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CALayer;

@interface MAVeLayerMatrixItem : NSObject
{
    _Bool _dimmed;
    CALayer *_backLayer;
    CALayer *_userLayer;
    CDUnknownBlockType _userLayerCreator;
    CDUnknownBlockType _userLayerRemover;
    CDUnknownBlockType _userLayerUpdater;
    id _userInfo;
    id _tag;
    struct CGSize _size;
}

+ (id)itemWithTag:(id)arg1 userLayerCreator:(CDUnknownBlockType)arg2 userLayerUpdater:(CDUnknownBlockType)arg3 userLayerRemover:(CDUnknownBlockType)arg4 userInfo:(id)arg5;
@property(retain, nonatomic) id tag; // @synthesize tag=_tag;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) CDUnknownBlockType userLayerUpdater; // @synthesize userLayerUpdater=_userLayerUpdater;
@property(copy, nonatomic) CDUnknownBlockType userLayerRemover; // @synthesize userLayerRemover=_userLayerRemover;
@property(copy, nonatomic) CDUnknownBlockType userLayerCreator; // @synthesize userLayerCreator=_userLayerCreator;
@property(retain, nonatomic) CALayer *userLayer; // @synthesize userLayer=_userLayer;
@property(nonatomic) _Bool dimmed; // @synthesize dimmed=_dimmed;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) CALayer *backLayer; // @synthesize backLayer=_backLayer;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTag:(id)arg1 userLayerCreator:(CDUnknownBlockType)arg2 userLayerUpdater:(CDUnknownBlockType)arg3 userLayerRemover:(CDUnknownBlockType)arg4 userInfo:(id)arg5;

@end

