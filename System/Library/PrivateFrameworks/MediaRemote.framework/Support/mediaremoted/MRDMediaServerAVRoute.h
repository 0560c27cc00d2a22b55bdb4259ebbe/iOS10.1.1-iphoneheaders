/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <mediaremoted/MRDAVRoute.h>

@class NSDictionary, MRDAVRouteExtendedInfo;

@interface MRDMediaServerAVRoute : MRDAVRoute {

	NSDictionary* _routeDescription;
	MRDAVRouteExtendedInfo* _extendedInfo;

}
-(BOOL)canBeDefaultRoute;
-(BOOL)isInputRoute;
-(BOOL)isOutputRoute;
-(BOOL)canBeDefaultSystemRoute;
-(BOOL)matchesUniqueIdentifier:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)name;
-(id)dictionary;
-(id)type;
-(id)uniqueIdentifier;
-(id)modelName;
-(BOOL)isPicked;
-(id)extendedInfo;
@end

