//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMCollectionViewCell.h"

@class ESPRestaurant, ESPRestaurantCellContentView, ESPRestaurantCellDiscountFoodView, ESPRestaurantCellPromotionContainerView, ESPRestaurantCellSameBrandsView, ESPRestaurantRecommendationTagsView, NSString, NVMSeparatorView, UIView;

@interface ESPRestaurantCollectionViewCell : NVMCollectionViewCell
{
    ESPRestaurant *_restaurant;
    id <IGListCollectionContext> _collectionContext;
    NSString *_highlightText;
    ESPRestaurantCellDiscountFoodView *_discountFoodView;
    ESPRestaurantCellPromotionContainerView *_promotionContainerView;
    ESPRestaurantCellContentView *_drawView;
    ESPRestaurantCellSameBrandsView *_sameBrandRestaurantsView;
    ESPRestaurantRecommendationTagsView *_recommendTagsView;
    UIView *_maskCoverView;
    NVMSeparatorView *_separator;
}

+ (double)drawViewHeightForRestaurant:(id)arg1;
+ (double)cellHeightWithRestaurant:(id)arg1;
@property(retain, nonatomic) NVMSeparatorView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UIView *maskCoverView; // @synthesize maskCoverView=_maskCoverView;
@property(retain, nonatomic) ESPRestaurantRecommendationTagsView *recommendTagsView; // @synthesize recommendTagsView=_recommendTagsView;
@property(retain, nonatomic) ESPRestaurantCellSameBrandsView *sameBrandRestaurantsView; // @synthesize sameBrandRestaurantsView=_sameBrandRestaurantsView;
@property(retain, nonatomic) ESPRestaurantCellContentView *drawView; // @synthesize drawView=_drawView;
@property(retain, nonatomic) ESPRestaurantCellPromotionContainerView *promotionContainerView; // @synthesize promotionContainerView=_promotionContainerView;
@property(retain, nonatomic) ESPRestaurantCellDiscountFoodView *discountFoodView; // @synthesize discountFoodView=_discountFoodView;
@property(copy, nonatomic) NSString *highlightText; // @synthesize highlightText=_highlightText;
@property(nonatomic) __weak id <IGListCollectionContext> collectionContext; // @synthesize collectionContext=_collectionContext;
@property(retain, nonatomic) ESPRestaurant *restaurant; // @synthesize restaurant=_restaurant;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (id)accessibilityElements;
- (_Bool)isAccessibilityElement;
- (void)layoutSubviews;
- (double)drawViewHeight;
- (void)setHighlighted:(_Bool)arg1;
- (void)removeMaskView;
- (void)showMaskView;
- (void)setData:(id)arg1;
- (void)loadRecommendTagsViewIfNeeded;
- (void)loadDiscountFoodViewIfNeed;
- (void)loadSameBrandRestaurantsView;
- (void)loadPromotionContainerView;
- (void)loadSeparator;
- (id)initWithFrame:(struct CGRect)arg1;

@end
