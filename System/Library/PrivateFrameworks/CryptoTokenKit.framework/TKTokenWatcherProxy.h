/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:41 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TKProtocolTokenWatcher.h>

@class TKTokenWatcher;

@interface TKTokenWatcherProxy : NSObject <TKProtocolTokenWatcher> {

	TKTokenWatcher* _watcher;

}
-(void)insertedToken:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)removedToken:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)initWithWatcher:(id)arg1 ;
@end

