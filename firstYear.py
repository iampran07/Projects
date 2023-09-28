import phonenumbers import folium
import map
from phonenumbers import geocoder
number= input("Enter your no. with Country code: ")
Key = "49d137df1ce648b5b78f5dc140a92df1"
samNumber = phonenumbers.parse(number)
yourLocation = geocoder.description_for_number (samNumber, "en") print(yourLocation)
from phonenumbers import timezone
time timezone.time_zones_for_number (samNumber)
print(time)
from opencage.geocoder import OpenCageGeocode
geocoder OpenCageGeocode (Key)
query= str(yourLocation)
results geocoder.geocode(query)
lat = results[0]['geometry']['lat']
lng = results[0]['geometry']['Lng'] print(lat, lng)
map = folium.Map(location=[lat, lng], zoom_start=__9_)
folium.Marker ([lat, lng],popup=yourLocation).add_to(map)
map.save("myLocation.html")
