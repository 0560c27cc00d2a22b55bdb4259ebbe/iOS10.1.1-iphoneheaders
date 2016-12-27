/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class LPLinkMetadata;

@interface LPSharingMetadataWrapper : NSObject <NSSecureCoding> {

	BOOL _hasFetchedSubresources;
	LPLinkMetadata* _metadata;

}

@property (nonatomic,retain) LPLinkMetadata * metadata;                //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) BOOL hasFetchedSubresources;              //@synthesize hasFetchedSubresources=_hasFetchedSubresources - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(LPLinkMetadata *)metadata;
-(void)setMetadata:(LPLinkMetadata *)arg1 ;
-(void)setHasFetchedSubresources:(BOOL)arg1 ;
-(id)dataRepresentation;
-(BOOL)hasFetchedSubresources;
@end

