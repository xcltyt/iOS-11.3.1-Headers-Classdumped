/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/CarouselLayoutSettings.bundle/CarouselLayoutSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarouselLayoutSettings/CarouselLayoutSettings-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol CSLHexAppGraphDelegate;
@class NSMutableDictionary, NSMutableSet, NSString;

@interface CSLHexAppGraph : NSObject <NSFastEnumeration, NSCopying, NSSecureCoding> {

	BOOL _neighborCountValid;
	BOOL _normalizedRadiusDirty;
	float _normalizedHorizontalRadius;
	float _normalizedVerticalRadius;
	unordered_map<CSL::Hex, CSLHexAppNode *__unsafe_unretained, std::__1::hash<CSL::Hex>, std::__1::equal_to<CSL::Hex>, std::__1::allocator<std::__1::pair<const CSL::Hex, CSLHexAppNode *__unsafe_unretained> > >* _nodes;
	unordered_map<CSL::Hex, int, std::__1::hash<CSL::Hex>, std::__1::equal_to<CSL::Hex>, std::__1::allocator<std::__1::pair<const CSL::Hex, int> > >* _neighborCounts;
	id<CSLHexAppGraphDelegate> _delegate;
	NSMutableDictionary* _nodesByBundle;
	NSMutableSet* _changedNodes;

}

@property (nonatomic,retain) NSMutableDictionary * nodesByBundle;                     //@synthesize nodesByBundle=_nodesByBundle - In the implementation block
@property (nonatomic,retain) NSMutableSet * changedNodes;                             //@synthesize changedNodes=_changedNodes - In the implementation block
@property (assign,nonatomic,__weak) id<CSLHexAppGraphDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) float normalizedHorizontalRadius; 
@property (nonatomic,readonly) float normalizedVerticalRadius; 
@property (nonatomic,readonly) NSString * abbreviatedDescription; 
+(id)unarchiveFromPropertyList:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(BOOL)containsNodeAtHex:(Hex)arg1 ;
-(NSMutableSet *)changedNodes;
-(float)normalizedVerticalRadius;
-(id)disconnectedNodesCheckingHexes:(unordered_set<CSL::Hex, std::__1::hash<CSL::Hex>, std::__1::equal_to<CSL::Hex>, std::__1::allocator<CSL::Hex> >*)arg1 ;
-(void)setChangedNodes:(NSMutableSet *)arg1 ;
-(id)archiveToPropertyList;
-(void)decrementNeighborCountsForHex:(Hex)arg1 ;
-(float)normalizedHorizontalRadius;
-(id)removeNodeAtHex:(Hex)arg1 ;
-(void)setNodesByBundle:(NSMutableDictionary *)arg1 ;
-(id)nodeAtHex:(Hex)arg1 ;
-(id)nodeWithBundleIdentifier:(id)arg1 ;
-(void)commitMove;
-(void)revertMove;
-(void)moveNode:(id)arg1 toHex:(Hex)arg2 final:(BOOL)arg3 ;
-(void)setNodeObject:(id)arg1 forKey:(Hex)arg2 ;
-(NSMutableDictionary *)nodesByBundle;
-(void)calculateNeighborCounts;
-(Hex)firstGoodEmptyHex;
-(void)incrementNeighborCountsForHex:(Hex)arg1 ;
-(BOOL)isLonelyHex:(Hex)arg1 ;
-(void)collapseLonelyNodes:(id)arg1 ;
-(long long)neighborCountOfHex:(Hex)arg1 upToMinimumNeighbors:(long long)arg2 withinRange:(unsigned long long)arg3 ;
-(void)removeNodeUsingIterator:(_hash_map_const_iterator<std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<CSL::Hex, CSLHexAppNode *__unsafe_unretained>, void *> *> >*)arg1 ;
-(void)removeNodeWithoutReflowUsingIterator:(_hash_map_const_iterator<std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<CSL::Hex, CSLHexAppNode *__unsafe_unretained>, void *> *> >*)arg1 ;
-(void)collapseToHex:(Hex)arg1 ignoringNode:(id)arg2 ;
-(void)moveNode:(id)arg1 toHex:(Hex)arg2 ;
-(BOOL)checkHexes:(unordered_set<CSL::Hex, std::__1::hash<CSL::Hex>, std::__1::equal_to<CSL::Hex>, std::__1::allocator<CSL::Hex> >*)arg1 connectedNodes:(id)arg2 disconnectedNodes:(id)arg3 ;
-(void)collapseLonelyNodes:(id)arg1 connectedNodes:(id)arg2 disconnectedNodes:(id)arg3 ;
-(BOOL)checkNode:(id)arg1 connectedNodes:(id)arg2 disconnectedNodes:(id)arg3 ;
-(void)removeNodeWithoutReflow:(id)arg1 ;
-(void)setNode:(id)arg1 toHex:(Hex)arg2 ;
-(long long)directNeighborCountOfHex:(Hex)arg1 ;
-(id)addNodeWithBundleIdentifier:(id)arg1 ;
-(id)changeToMatch:(id)arg1 ;
-(NSString *)abbreviatedDescription;
-(void)removeNodeObjectForKey:(Hex)arg1 ;
-(void)updateNormalizedRadius;
-(BOOL)integrityCheckIgnoringNode:(id)arg1 shouldCheckNeighbors:(BOOL)arg2 ;
-(BOOL)hex:(Hex)arg1 hasAtLeastNNearbyNodes:(long long)arg2 withinRange:(unsigned long long)arg3 ;
-(id)initFromPropertyList:(id)arg1 ;
-(void)resetToDefaults:(id)arg1 ;
-(id)init;
-(unsigned long long)count;
-(id<CSLHexAppGraphDelegate>)delegate;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_CS5*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<CSLHexAppGraphDelegate>)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)removeNode:(id)arg1 ;
-(id)allNodes;
-(BOOL)integrityCheck;
-(id)initWithNodes:(id)arg1 ;
-(BOOL)addNode:(id)arg1 ;
@end
