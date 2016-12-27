/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FCFeedViewportBookmark : NSObject <NSCopying, NSCoding> {

	NSString* _externalGroupID;
	NSString* _internalGroupID;
	NSString* _articleID;

}

@property (nonatomic,copy,readonly) NSString * externalGroupID;              //@synthesize externalGroupID=_externalGroupID - In the implementation block
@property (nonatomic,copy,readonly) NSString * internalGroupID;              //@synthesize internalGroupID=_internalGroupID - In the implementation block
@property (nonatomic,copy,readonly) NSString * articleID;                    //@synthesize articleID=_articleID - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)articleID;
-(NSString *)internalGroupID;
-(id)initWithExternalGroupID:(id)arg1 internalGroupID:(id)arg2 articleID:(id)arg3 ;
-(NSString *)externalGroupID;
@end

