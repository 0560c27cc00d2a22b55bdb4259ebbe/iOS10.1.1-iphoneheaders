/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveExperts/PEXConnectionsSource.h>
#import <libobjc.A.dylib/PEXConnectionsLocationSource.h>

@class PBServerConnection, PEXPasteboardLocationItem, NSString;

@interface PEXConnectionsPasteboardSource : PEXConnectionsSource <PEXConnectionsLocationSource> {

	PBServerConnection* _pasteboardServerConnection;
	unsigned long long _pasteboardNotificationState;
	PEXPasteboardLocationItem* _mostRecentPasteboardItem;
	id _pasteboardObserver;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)identifier;
-(id)init;
-(void)dealloc;
-(id)locationItemsWithCriteria:(id)arg1 earliest:(id)arg2 latest:(id)arg3 limit:(unsigned long long)arg4 consumer:(unsigned long long)arg5 category:(unsigned long long)arg6 ;
-(void)refreshMostRecentPasteboardItemFromNotification:(BOOL)arg1 ;
-(id)addressPasteboardTextItemFromNotification:(BOOL)arg1 ;
-(id)validUTTypes;
-(id)fetchedPasteboardItem;
@end

