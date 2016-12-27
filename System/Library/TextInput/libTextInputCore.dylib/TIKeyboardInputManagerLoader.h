/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:40:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, TIKeyboardInputManagerBase;

@interface TIKeyboardInputManagerLoader : NSObject {

	NSMutableDictionary* _availableInputManagers;
	NSMutableDictionary* _lastUsedDate;
	TIKeyboardInputManagerBase* _mostRecentlyRequested;

}

@property (nonatomic,retain) TIKeyboardInputManagerBase * mostRecentlyRequested;              //@synthesize mostRecentlyRequested=_mostRecentlyRequested - In the implementation block
+(id)sharedLoader;
-(id)init;
-(void)dealloc;
-(id)resourceInputModes;
-(id)inputManagerForInputMode:(id)arg1 withClass:(Class)arg2 ;
-(void)cacheInputManager:(id)arg1 ;
-(void)reduceCacheToSize:(unsigned long long)arg1 ;
-(TIKeyboardInputManagerBase *)mostRecentlyRequested;
-(void)setMostRecentlyRequested:(TIKeyboardInputManagerBase *)arg1 ;
@end
