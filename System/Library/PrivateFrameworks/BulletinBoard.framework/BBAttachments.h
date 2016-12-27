/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSCountedSet;

@interface BBAttachments : NSObject <NSCopying, NSSecureCoding> {

	long long primaryType;
	NSCountedSet* _additionalAttachments;

}

@property (nonatomic,retain) NSCountedSet * additionalAttachments;              //@synthesize additionalAttachments=_additionalAttachments - In the implementation block
@property (assign,nonatomic) long long primaryType; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSCountedSet *)additionalAttachments;
-(void)setAdditionalAttachments:(NSCountedSet *)arg1 ;
-(long long)primaryType;
-(unsigned long long)numberOfAdditionalAttachmentsOfType:(long long)arg1 ;
-(unsigned long long)numberOfAdditionalAttachments;
-(BOOL)isEqualToAttachments:(id)arg1 ;
-(void)setPrimaryType:(long long)arg1 ;
-(void)addAttachmentOfType:(long long)arg1 ;
@end

