/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSLayoutRelationship, _NSLayoutRelationshipNodeParent;
@interface _NSLayoutRelationshipNode : NSObject {

	id<NSLayoutRelationship> _representedRelationship;
	id<_NSLayoutRelationshipNodeParent> _parentNode;

}

@property (copy) id<NSLayoutRelationship> representedRelationship;              //@synthesize representedRelationship=_representedRelationship - In the implementation block
@property (assign) id<_NSLayoutRelationshipNodeParent> parentNode;              //@synthesize parentNode=_parentNode - In the implementation block
-(id)initWithRelationship:(id)arg1 ;
-(id<NSLayoutRelationship>)representedRelationship;
-(void)setRepresentedRelationship:(id<NSLayoutRelationship>)arg1 ;
-(void)setParentNode:(id<_NSLayoutRelationshipNodeParent>)arg1 ;
-(void)dealloc;
-(id)description;
-(id<_NSLayoutRelationshipNodeParent>)parentNode;
@end

