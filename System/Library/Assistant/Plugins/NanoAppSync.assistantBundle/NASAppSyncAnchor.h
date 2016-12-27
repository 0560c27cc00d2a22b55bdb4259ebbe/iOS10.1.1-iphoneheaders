/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/Plugins/NanoAppSync.assistantBundle/NanoAppSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoAppSync/NanoAppSync-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface NASAppSyncAnchor : NSObject <NSCopying, NSCoding> {

	unsigned long long _mainIndex;
	unsigned long long _subIndex;
	long long _stringOnce;
	NSString* _stringRepresentation;

}

@property (nonatomic,copy,readonly) NSString * stringRepresentation; 
+(id)anchorFromStringRepresentation:(id)arg1 ;
+(id)anchorFromStringRepresentation:(id)arg1 error:(id*)arg2 ;
+(BOOL)isValidStringRepresentation:(id)arg1 withMainIndex:(unsigned long long*)arg2 subIndex:(unsigned long long*)arg3 ;
-(BOOL)isOlderThanAnchor:(id)arg1 ;
-(id)anchorByIncrementingSubIndex;
-(BOOL)isEqualToAnchor:(id)arg1 ;
-(BOOL)isNewerThanAnchor:(id)arg1 ;
-(id)primitiveAnchor;
-(BOOL)isPrimitiveAnchor;
-(id)_initWithMainIndex:(unsigned long long)arg1 subIndex:(unsigned long long)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)compare:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)stringRepresentation;
@end

