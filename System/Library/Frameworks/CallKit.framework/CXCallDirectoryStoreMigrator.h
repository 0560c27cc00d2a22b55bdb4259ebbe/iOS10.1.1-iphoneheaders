/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CXCallDirectoryStore;

@interface CXCallDirectoryStoreMigrator : NSObject {

	CXCallDirectoryStore* _store;

}

@property (nonatomic,retain) CXCallDirectoryStore * store;              //@synthesize store=_store - In the implementation block
-(id)_performMigrationsStartingAtSchemaVersion:(long long)arg1 error:(id*)arg2 ;
-(id)performMigrationsWithError:(id*)arg1 ;
-(void)setStore:(CXCallDirectoryStore *)arg1 ;
-(CXCallDirectoryStore *)store;
@end

