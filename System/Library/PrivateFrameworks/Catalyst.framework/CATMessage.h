/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID;

@interface CATMessage : NSObject <NSSecureCoding> {

	NSUUID* _messageUUID;

}

@property (nonatomic,retain) NSUUID * messageUUID;              //@synthesize messageUUID=_messageUUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setMessageUUID:(NSUUID *)arg1 ;
-(NSUUID *)messageUUID;
@end

