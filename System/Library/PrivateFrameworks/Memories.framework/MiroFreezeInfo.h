/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface MiroFreezeInfo : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isFreeze;
	BOOL _isRemoved;
	BOOL _isAdded;

}

@property (nonatomic,readonly) BOOL isFreeze;                            //@synthesize isFreeze=_isFreeze - In the implementation block
@property (nonatomic,readonly) BOOL isRemoved;                           //@synthesize isRemoved=_isRemoved - In the implementation block
@property (nonatomic,readonly) BOOL isAdded;                             //@synthesize isAdded=_isAdded - In the implementation block
@property (nonatomic,readonly) NSData * dataRepresentation; 
+(BOOL)supportsSecureCoding;
+(id)freezeInfoWithData:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSData *)dataRepresentation;
-(BOOL)isFreeze;
-(BOOL)isAdded;
-(BOOL)isRemoved;
@end

