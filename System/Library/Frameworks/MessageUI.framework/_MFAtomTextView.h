/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UITextView.h>

@class MFComposeRecipientTextView, NSArray;

@interface _MFAtomTextView : UITextView {

	unsigned long long _textStorageEditingDepth;
	MFComposeRecipientTextView* _hostRecipientView;

}

@property (readonly) NSArray * atoms; 
@property (assign) MFComposeRecipientTextView * hostRecipientView;              //@synthesize hostRecipientView=_hostRecipientView - In the implementation block
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)resignFirstResponder;
-(id)undoManager;
-(void)_handleKeyUIEvent:(id)arg1 ;
-(BOOL)becomeFirstResponder;
-(id)selectionRectsForRange:(id)arg1 ;
-(id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)makeTextWritingDirectionLeftToRight:(id)arg1 ;
-(void)makeTextWritingDirectionRightToLeft:(id)arg1 ;
-(long long)baseWritingDirection;
-(id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(void)setHostRecipientView:(MFComposeRecipientTextView *)arg1 ;
-(void)enumerateAtoms:(/*^block*/id)arg1 ;
-(void)enumerateAtomAttachments:(/*^block*/id)arg1 ;
-(void)batchTextStorageUpdates:(/*^block*/id)arg1 ;
-(NSArray *)atoms;
-(BOOL)isEditingTextStorage;
-(void)enumerateAtomsInCharacterRange:(NSRange)arg1 withBlock:(/*^block*/id)arg2 ;
-(CGRect)convertGlyphRect:(CGRect)arg1 ;
-(MFComposeRecipientTextView *)hostRecipientView;
-(BOOL)_delegateSupportsKeyboardEvents;
@end

