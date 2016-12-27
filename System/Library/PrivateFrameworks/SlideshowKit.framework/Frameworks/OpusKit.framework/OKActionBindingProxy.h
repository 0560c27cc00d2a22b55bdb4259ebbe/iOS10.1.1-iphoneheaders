/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/OKSettingsSupport.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OKActionResponder;
@class NSString, NSMutableArray, NSArray;

@interface OKActionBindingProxy : NSObject <UIGestureRecognizerDelegate, OKSettingsSupport, NSCopying> {

	NSString* _name;
	NSString* _actionScript;
	NSMutableArray* _shouldRecognizeSimultaneously;
	BOOL _alwaysRecognizeSimultaneously;
	NSMutableArray* _requireToFail;
	id _target;
	SEL _selector;
	id<OKActionResponder> _actionResponder;
	long long _tag;
	BOOL _canBeTriggeredWithoutInteractivity;
	unsigned long long _scope;

}

@property (nonatomic,copy) NSString * actionScript;                                //@synthesize actionScript=_actionScript - In the implementation block
@property (nonatomic,copy) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSArray * shouldRecognizeSimultaneously;                //@synthesize shouldRecognizeSimultaneously=_shouldRecognizeSimultaneously - In the implementation block
@property (assign,nonatomic) BOOL alwaysRecognizeSimultaneously;                   //@synthesize alwaysRecognizeSimultaneously=_alwaysRecognizeSimultaneously - In the implementation block
@property (nonatomic,copy) NSArray * requireToFail;                                //@synthesize requireToFail=_requireToFail - In the implementation block
@property (assign,nonatomic) BOOL canBeTriggeredWithoutInteractivity;              //@synthesize canBeTriggeredWithoutInteractivity=_canBeTriggeredWithoutInteractivity - In the implementation block
@property (assign,nonatomic) id target;                                            //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL selector;                                         //@synthesize selector=_selector - In the implementation block
@property (readonly) id<OKActionResponder> actionResponder;                        //@synthesize actionResponder=_actionResponder - In the implementation block
@property (readonly) unsigned long long scope;                                     //@synthesize scope=_scope - In the implementation block
@property (assign,nonatomic) long long tag;                                        //@synthesize tag=_tag - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
+(id)actionBinding;
+(id)actionBindingWithGestureRecognizer:(id)arg1 fromActionResponder:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTarget:(id)arg1 ;
-(void)setSelector:(SEL)arg1 ;
-(id)target;
-(SEL)selector;
-(long long)tag;
-(void)setTag:(long long)arg1 ;
-(unsigned long long)scope;
-(id)initWithSettings:(id)arg1 ;
-(BOOL)performAction:(id)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(void)loadForResponder:(id)arg1 scope:(unsigned long long)arg2 ;
-(BOOL)respondsToAction:(id)arg1 isTouchCountAgnostic:(BOOL)arg2 ;
-(BOOL)ownsGestureRecognizer:(id)arg1 ;
-(id<OKActionResponder>)actionResponder;
-(CGPoint)locationForActionFromGesture:(id)arg1 ;
-(BOOL)canBeTriggeredWithoutInteractivity;
-(NSString *)actionScript;
-(void)setShouldRecognizeSimultaneously:(NSArray *)arg1 ;
-(void)setRequireToFail:(NSArray *)arg1 ;
-(void)prepareAction:(id)arg1 ;
-(void)setActionScript:(NSString *)arg1 ;
-(NSArray *)shouldRecognizeSimultaneously;
-(BOOL)alwaysRecognizeSimultaneously;
-(void)setAlwaysRecognizeSimultaneously:(BOOL)arg1 ;
-(NSArray *)requireToFail;
-(void)setCanBeTriggeredWithoutInteractivity:(BOOL)arg1 ;
-(void)unload;
@end

