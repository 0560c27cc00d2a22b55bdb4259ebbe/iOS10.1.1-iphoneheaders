/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/ICRequest.h>

@interface ICBulkLyricsInfoRequest : ICRequest {

	BOOL _useLongIDs;

}
+(id)requestWithDatabaseID:(unsigned)arg1 itemIDs:(id)arg2 useLongIDs:(BOOL)arg3 ;
-(id)_bodyDataForItemIDs:(id)arg1 ;
-(id)initWithDatabaseID:(unsigned)arg1 itemIDs:(id)arg2 useLongIDs:(BOOL)arg3 ;
-(id)canonicalResponseForResponse:(id)arg1 ;
@end

