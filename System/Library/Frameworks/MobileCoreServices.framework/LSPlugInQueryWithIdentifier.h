/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCoreServices/LSPlugInQuery.h>

@class NSString;

@interface LSPlugInQueryWithIdentifier : LSPlugInQuery {

	int _bindingMap;
	NSString* _identifier;

}
+(BOOL)supportsSecureCoding;
-(id)_initWithIdentifier:(id)arg1 inMap:(int)arg2 ;
-(void)_enumerateWithXPCConnection:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)_shouldCacheResolvedResults;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)_identifier;
@end

