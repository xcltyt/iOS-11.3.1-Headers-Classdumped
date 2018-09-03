//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMAPView.h"

@class EcTimer, UIEvent, UIImage;

@interface GUIView : GMAPView
{
    unsigned int m_Tracking:1;
    unsigned int m_Deferred:1;
    unsigned int m_MouseMove:1;
    unsigned int m_HaltedMouseMove:1;
    unsigned int m_isModified:1;
    unsigned int m_isLongClick:1;
    int m_EventNumber;
    struct CGPoint m_InitialPoint;
    struct CGPoint m_MouseVector;
    struct CGPoint m_CurrentObjectVector;
    int m_Action;
    int m_DeferredAction;
    int m_MouseMoveAction;
    int m_Category;
    double m_Timestamp;
    UIEvent *m_ScrollEvent;
    EcTimer *m_Timer;
    EcTimer *m_ActionTimer;
    EcTimer *m_MouseMovedTimer;
    int m_MouseViewState;
    unsigned int m_ClickModifier;
    _Bool m_AcceptsBackgroundClick;
    _Bool m_AcceptMouseEvents;
    struct CGRect m_TrackMouseObjectFrame;
    struct CGRect m_LastSelectionRect;
    struct CGRect m_SelectionRect;
    float m_leftAutomaticScrollInset;
    float m_rightAutomaticScrollInset;
    _Bool m_verticalAutoscrollEnabled;
    _Bool m_horizontalAutoscrollEnabled;
    _Bool m_disableWhileRecording;
    struct GViewConnector *m_p;
    _Bool m_IgnoresMultiTouchEventsCompletely;
    UIImage *m_FrozenImage;
}

@property _Bool acceptsBackgroundClick; // @synthesize acceptsBackgroundClick=m_AcceptsBackgroundClick;
- (void)updateContent;
- (void)handleDisplayTimer:(id)arg1;
- (void)enableMemoryLevelHandling:(_Bool)arg1;
- (void)handleMemoryNotification:(id)arg1;
- (void)releaseAllGImages;
- (void)setFrozen:(_Bool)arg1 dimmed:(double)arg2 opaque:(_Bool)arg3;
@property(nonatomic) _Bool frozen;
- (void)setScalable:(_Bool)arg1;
@property double brightness;
- (_Bool)validEvent:(id)arg1;
@property _Bool ignoresMultiTouchEventsCompletely;
- (id)dynamicToolTipForTag:(int)arg1;
- (void)handlePulse:(id)arg1;
- (struct GBaseView *)galileoBaseView;
- (_Bool)onMouseMoveTest:(struct CGPoint)arg1;
- (int)mouseViewState;
- (void)onMouseMove:(id)arg1;
- (void)endMouseMove;
- (void)beginMouseMove;
- (void)pc_MouseMovedTimer2:(id)arg1;
- (double)scale;
- (void)setScale:(double)arg1;
- (void)setScale:(double)arg1 andResizeView:(_Bool)arg2;
- (struct CGSize)sizeForScale:(double)arg1;
- (_Bool)isScalable;
- (void)setHorizontalAutoscrollEnabled:(_Bool)arg1;
- (void)setVerticalAutoscrollEnabled:(_Bool)arg1;
- (void)setRightAutomaticScrollInset:(float)arg1;
- (void)setLeftAutomaticScrollInset:(float)arg1;
- (void)setAutomaticScrollInset:(float)arg1;
- (void)onPrepareSelectionRect:(struct CGRect *)arg1;
- (int)onActionClickinSelectionRect:(id)arg1;
- (void)onActionInRect:(struct CGRect)arg1 withEvent:(id)arg2;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)otherMouseDragged:(id)arg1;
- (void)rightMouseDragged:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)otherMouseUp:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)otherMouseDown:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)onActionCancelled:(id)arg1;
- (void)onActionEnd:(id)arg1;
- (void)onPeriodicAction:(id)arg1;
- (void)onAction:(id)arg1;
- (int)onActionBegin:(id)arg1;
- (void)drawSelectionRect:(struct CGRect)arg1 inRect:(struct CGRect)arg2;
- (struct CGRect)lastSelectionRect;
- (struct CGRect)selectionRect;
- (int)lastActionID;
- (int)actionID;
- (_Bool)isDeferredAction;
- (_Bool)isLongClick;
- (_Bool)isActionModified;
- (void)setActionModified:(_Bool)arg1;
- (_Bool)isTracking;
- (void)setCurrentObjectVector:(struct CGPoint)arg1;
- (struct CGPoint)currentObjectVector;
- (void)setMouseVector:(struct CGPoint)arg1;
- (struct CGPoint)initialSelectionPoint;
- (struct CGPoint)pointOfInterest:(struct CGPoint)arg1;
- (struct CGPoint)mouseVector;
- (struct CGPoint)viewMouseLocation;
- (struct CGPoint)windowMouseLocation;
- (int)eventNumber;
- (_Bool)autoscroll:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)initiateAutoscrollIfNecessary:(id)arg1;
- (_Bool)isValidEventNumber:(id)arg1;
- (struct CGRect)normalRect;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint)flipPoint:(struct CGPoint)arg1;
- (void)periodic:(id)arg1;
- (int)getCurrentModifierFlags;
- (void)setMouseMoveAction:(int)arg1 open:(_Bool)arg2;
- (void)haltMouseMoveAction:(_Bool)arg1;
- (float)longClickDelayForPoint:(struct CGPoint)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)prepareAction:(id)arg1;
- (void)setStopDeferredAction;
- (void)setDeferredActionIn:(double)arg1;
- (void)setActionID:(int)arg1;
- (void)pc_MouseMovedTimer:(id)arg1;
- (void)pc_ActionViewDeferredActionTimer:(id)arg1;
- (void)pc_ActionViewTimer:(id)arg1;
- (void)dealloc;
- (void)releaseBaseView;
- (void)notify:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andBaseView:(void *)arg2 takeOwnership:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 andBaseView:(void *)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initSelf;
- (void)setFrame:(struct CGRect)arg1;
- (_Bool)isOpaque;
- (_Bool)isFlipped;
- (void)willMoveToWindow:(id)arg1;
- (void)awakeFromNib;
- (void)initRequiredTimer;
- (void)removeAllTimer;
- (void)drawRect:(struct CGRect)arg1;

@end
