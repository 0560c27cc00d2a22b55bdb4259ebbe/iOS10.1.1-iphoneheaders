/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUScriptObject.h>
#import <libobjc.A.dylib/SUScriptNavigationItem.h>

@class SUScriptCanvasContext, WebScriptObject, UIImage, NSString;

@interface SUScriptButton : SUScriptObject <SUScriptNavigationItem> {

	id _action;
	SUScriptCanvasContext* _canvas;
	BOOL _shouldPerformDefaultAction;
	WebScriptObject* _target;

}

@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,readonly) UIEdgeInsets imageEdgeInsets; 
@property (assign,nonatomic) BOOL shouldPerformDefaultAction;              //@synthesize shouldPerformDefaultAction=_shouldPerformDefaultAction - In the implementation block
@property (retain) id action; 
@property (retain) SUScriptCanvasContext * canvas; 
@property (assign) BOOL enabled; 
@property (assign) BOOL loading; 
@property (readonly) id showingConfirmation; 
@property (retain) NSString * subtitle; 
@property (retain) NSString * style; 
@property (assign) long long tag; 
@property (retain) NSString * title; 
@property (retain) WebScriptObject * target; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
-(id)init;
-(BOOL)enabled;
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)action;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)style;
-(UIImage *)image;
-(void)setTarget:(WebScriptObject *)arg1 ;
-(WebScriptObject *)target;
-(void)setCanvas:(SUScriptCanvasContext *)arg1 ;
-(long long)tag;
-(void)setTag:(long long)arg1 ;
-(void)setStyle:(NSString *)arg1 ;
-(void)setAction:(id)arg1 ;
-(id)_action;
-(SUScriptCanvasContext *)canvas;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(UIEdgeInsets)imageEdgeInsets;
-(id)attributeKeys;
-(id)buttonItem;
-(id)_initSUScriptButton;
-(id)initWithSystemItemString:(id)arg1 ;
-(id)_boxedNativeButton;
-(id)nativeButtonOfType:(int)arg1 ;
-(id)_nativeButton;
-(void)hideConfirmationAnimated:(BOOL)arg1 ;
-(void)showConfirmationWithTitle:(id)arg1 animated:(BOOL)arg2 ;
-(void)setImageInsetsTop:(float)arg1 left:(float)arg2 bottom:(float)arg3 right:(float)arg4 ;
-(void)setImageWithURLString:(id)arg1 scale:(id)arg2 ;
-(void)performActionWithArguments:(id)arg1 ;
-(void)setNativeButton:(id)arg1 ;
-(BOOL)loading;
-(id)_systemItemString;
-(BOOL)shouldPerformDefaultAction;
-(void)setShouldPerformDefaultAction:(BOOL)arg1 ;
-(id)scriptAttributeKeys;
-(id)_className;
-(void)setLoading:(BOOL)arg1 ;
-(id)showingConfirmation;
@end

