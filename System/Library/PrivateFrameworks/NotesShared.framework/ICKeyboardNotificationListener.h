/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NotesShared/NotesShared-Structs.h>
@interface ICKeyboardNotificationListener : NSObject {

	CGRect _keyboardFrame;

}

@property (assign,nonatomic) CGRect keyboardFrame;              //@synthesize keyboardFrame=_keyboardFrame - In the implementation block
+(id)sharedListener;
-(id)init;
-(void)dealloc;
-(CGRect)keyboardFrame;
-(void)handleKeyboardWillShow:(id)arg1 ;
-(void)handleKeyboardWillHide:(id)arg1 ;
-(CGRect)currentKeyboardFrame;
-(void)setKeyboardFrame:(CGRect)arg1 ;
@end

