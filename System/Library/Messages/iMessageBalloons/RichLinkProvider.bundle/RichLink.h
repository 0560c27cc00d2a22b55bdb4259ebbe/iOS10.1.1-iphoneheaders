/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Messages/iMessageBalloons/RichLinkProvider.bundle/RichLinkProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class LPLinkMetadata;

@interface RichLink : NSObject <NSSecureCoding> {

	BOOL _placeholder;
	BOOL _needsSubresourceFetch;
	LPLinkMetadata* _metadata;

}

@property (nonatomic,copy) LPLinkMetadata * metadata;                            //@synthesize metadata=_metadata - In the implementation block
@property (assign,getter=isPlaceholder,nonatomic) BOOL placeholder;              //@synthesize placeholder=_placeholder - In the implementation block
@property (assign,nonatomic) BOOL needsSubresourceFetch;                         //@synthesize needsSubresourceFetch=_needsSubresourceFetch - In the implementation block
+(id)linkWithDataRepresentation:(id)arg1 attachments:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(void)setNeedsSubresourceFetch:(BOOL)arg1 ;
-(id)dataRepresentationWithOutOfLineAttachments:(id*)arg1 ;
-(BOOL)needsSubresourceFetch;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPlaceholder:(BOOL)arg1 ;
-(LPLinkMetadata *)metadata;
-(void)setMetadata:(LPLinkMetadata *)arg1 ;
-(BOOL)isPlaceholder;
@end

