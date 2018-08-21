//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextViewDelegate.h"

@class NSString, UILabel, UITextView;

@interface MessageTextView : UIView <UITextViewDelegate>
{
    NSString *placeHolderText;
    NSString *initialMessageText;
    long long maxCharacterLimit;
    UITextView *_messageTextView;
    id <UITextViewDelegate> _textViewDelegate;
    NSString *_messageText;
    UILabel *_placeHolderLabel;
    UILabel *_remainingCharsLabel;
}

@property(retain, nonatomic) UILabel *remainingCharsLabel; // @synthesize remainingCharsLabel=_remainingCharsLabel;
@property(retain, nonatomic) UILabel *placeHolderLabel; // @synthesize placeHolderLabel=_placeHolderLabel;
@property(retain, nonatomic) NSString *messageText; // @synthesize messageText=_messageText;
@property(retain, nonatomic) id <UITextViewDelegate> textViewDelegate; // @synthesize textViewDelegate=_textViewDelegate;
@property(retain, nonatomic) UITextView *messageTextView; // @synthesize messageTextView=_messageTextView;
@property(nonatomic) long long maxCharacterLimit; // @synthesize maxCharacterLimit;
@property(retain, nonatomic) NSString *initialMessageText; // @synthesize initialMessageText;
@property(retain, nonatomic) NSString *placeHolderText; // @synthesize placeHolderText;
- (void).cxx_destruct;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)focusTextView;
- (void)updateSubViewStates;
- (long long)characterCountForString:(id)arg1;
- (void)initializeViews;
- (void)updateRemainingCharsLabelFont;
- (void)traitCollectionDidChange:(id)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
