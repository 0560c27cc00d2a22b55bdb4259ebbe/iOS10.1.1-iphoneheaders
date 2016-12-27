/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Messages.framework/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messages/Messages-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class LPLinkMetadata, NSURL;

@interface MSRichLink : NSObject <NSCopying, NSSecureCoding> {

	LPLinkMetadata* _linkMetadata;
	NSURL* _URL;

}

@property (nonatomic,copy) NSURL * URL;                                   //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) LPLinkMetadata * _linkMetadata;              //@synthesize linkMetadata=_linkMetadata - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)set_linkMetadata:(LPLinkMetadata *)arg1 ;
-(LPLinkMetadata *)_linkMetadata;
@end

