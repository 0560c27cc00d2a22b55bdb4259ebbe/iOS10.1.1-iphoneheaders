/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class BulletinBoardSection, BBDataProviderConnection, NSObject, NSMutableDictionary, NSLock;

@interface BulletinBoard : NSObject {

	BulletinBoardSection* _appStoreSection;
	BBDataProviderConnection* _connection;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableDictionary* _sectionsByIdentifier;
	NSLock* _sectionsLock;

}

@property (readonly) BulletinBoardSection * appStoreSection; 
+(id)bulletinBoard;
-(BulletinBoardSection *)appStoreSection;
-(id)init;
-(void)dealloc;
-(id)sectionWithIdentifier:(id)arg1 ;
@end

