//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "BookmarksNavigationControllerDelegate.h"
#import "UIPopoverPresentationControllerDelegate.h"

@class BookmarksNavigationController, NSMutableArray, NSString, UIButton, WebBookmark;

@interface BookmarksBarView : UIView <BookmarksNavigationControllerDelegate, UIPopoverPresentationControllerDelegate>
{
    NSMutableArray *_bookmarkBarLabels;
    int _bookmarkBarID;
    UIButton *_moreBookmarksButton;
    WebBookmark *_moreBookmarksParent;
    unsigned int _moreBookmarksOffset;
    UIButton *_buttonUsedToShowNavigationController;
    _Bool _isShowingNavigationController;
    BookmarksNavigationController *_bookmarksNavigationController;
    id <BookmarksBarViewDelegate> _delegate;
    id <LinkPreviewProvider> _linkPreviewProvider;
}

@property(nonatomic) __weak id <LinkPreviewProvider> linkPreviewProvider; // @synthesize linkPreviewProvider=_linkPreviewProvider;
@property(nonatomic) __weak id <BookmarksBarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)bookmarksNavigationController:(id)arg1 showLockedBookmarksDatabaseAlertForBookmarkAddition:(_Bool)arg2;
- (void)bookmarksNavigationControllerViewDidDisappear:(id)arg1;
- (void)bookmarksNavigationControllerViewDidAppear:(id)arg1;
- (void)bookmarksNavigationControllerDidReload:(id)arg1;
- (void)bookmarksNavigationControllerReloadDidFail:(id)arg1;
- (id)containingBookmarkForNavigationController:(id)arg1;
- (void)bookmarksNavigationController:(id)arg1 didProduceNavigationIntent:(id)arg2;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_receivedBookmarksChangedNotification:(id)arg1;
- (void)_reloadBookmarkLabels;
- (void)_createAllLabelButtons;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;
- (void)_dismissCurrentBookmarksPopover;
- (void)_presentCurrentBookmarksPopoverFromButton:(id)arg1 animated:(_Bool)arg2;
- (void)_buttonTapped:(id)arg1;
- (void)_clearBookmarksNavigationController;
- (void)_setButtonUsedToShowNavigationController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
