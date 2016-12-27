/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:41:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol ACFKeychainManagerProtocol <NSObject>
@property (nonatomic,readonly) NSString * usedAccessGroup; 
@property (nonatomic,readonly) NSString * obtainAccessGroup; 
@property (nonatomic,readonly) NSString * sharedAccessGroup; 
@required
-(NSString *)sharedAccessGroup;
-(NSString *)obtainAccessGroup;
-(void)dumpResults:(id)arg1 printAttributes:(BOOL)arg2;
-(id)searchItemWithInfo:(id)arg1;
-(int)storeItemWithInfo:(id)arg1 share:(BOOL)arg2 result:(id*)arg3;
-(BOOL)removeItemWithInfo:(id)arg1;
-(NSString *)usedAccessGroup;

@end

