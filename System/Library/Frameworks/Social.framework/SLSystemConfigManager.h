/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Social/Social-Structs.h>
@class NSString;

@interface SLSystemConfigManager : NSObject {

	void* _prefs;
	BOOL _notifyForExternalChangeOnly;
	int _applySkipCount;
	NSString* _serviceType;

}
+(id)sharedInstanceForCallbackWhileLocked:(void*)arg1 ;
+(id)sharedInstanceForServiceType:(id)arg1 ;
-(void)dealloc;
-(id)initWithServiceType:(id)arg1 ;
-(void)_synchronize;
-(void)_notifyTarget:(unsigned)arg1 ;
-(void)_keepAlive;
-(void)_initializeSystemConfigPrefs:(id)arg1 ;
-(void*)_getValueForKey:(id)arg1 ;
-(void)_setCallback:(/*function pointer*/void*)arg1 withContext:(SCD_Struct_SL0*)arg2 ;
-(void)_tearDown;
-(void)setCachedUsername:(id)arg1 ;
-(id)cachedUsername;
-(void)_setValue:(void*)arg1 forKey:(id)arg2 ;
-(void)_refresh;
@end

