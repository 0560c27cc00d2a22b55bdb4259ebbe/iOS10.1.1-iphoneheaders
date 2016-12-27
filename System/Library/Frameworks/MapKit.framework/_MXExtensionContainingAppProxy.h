/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSString;

@interface _MXExtensionContainingAppProxy : NSObject {

	NSMutableSet* _extensionUIIdentifiers;
	NSMutableSet* _extensionNonUIIdentifiers;
	NSString* _containingAppIdentifer;

}

@property (nonatomic,copy,readonly) NSString * containingAppIdentifer;              //@synthesize containingAppIdentifer=_containingAppIdentifer - In the implementation block
@property (nonatomic,retain) NSMutableSet * extensionNonUIIdentifiers;              //@synthesize extensionNonUIIdentifiers=_extensionNonUIIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableSet * extensionUIIdentifiers;                 //@synthesize extensionUIIdentifiers=_extensionUIIdentifiers - In the implementation block
-(id)initWithContainingAppIdentifer:(id)arg1 ;
-(NSMutableSet *)extensionUIIdentifiers;
-(void)setExtensionUIIdentifiers:(NSMutableSet *)arg1 ;
-(NSMutableSet *)extensionNonUIIdentifiers;
-(void)setExtensionNonUIIdentifiers:(NSMutableSet *)arg1 ;
-(NSString *)containingAppIdentifer;
@end

